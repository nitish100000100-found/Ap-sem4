# Assignment 15: Multithreaded Counter using POSIX Threads

## Question

Write a multithreaded C program using POSIX threads (pthread) where multiple threads increment a shared global counter variable many times.

Requirements:

* Demonstrate race condition without synchronization.
* Use pthread_create() for thread creation.
* Use pthread_join() for thread completion.
* Use pthread_mutex_lock() and pthread_mutex_unlock() for synchronization.
* Produce correct output using a mutex.

## Program

**File:** `pthread_counter.c`

The program creates multiple threads that increment a shared global counter.

Two versions are demonstrated:

1. Without synchronization (Race Condition)
2. With mutex synchronization

## Race Condition

A race condition occurs because multiple threads access and modify the same shared variable simultaneously.

The statement:

```c
counter++;
```

is not an atomic operation. Multiple threads may read, modify, and write the value at the same time, causing updates to be lost.

As a result, the final counter value is often less than the expected value.

## How Mutex Solves the Problem

A mutex ensures that only one thread can enter the critical section at a time.

The critical section:

```c
pthread_mutex_lock(&mutex);

counter++;

pthread_mutex_unlock(&mutex);
```

prevents simultaneous modification of the shared counter, ensuring correct results.

## Compilation

```bash
gcc pthread_counter.c -o output -lpthread
```

## Execution

```bash
./output
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
