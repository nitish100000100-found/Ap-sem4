# Assignment 16: Producer-Consumer Synchronization using POSIX Threads and Semaphores

## Question

Develop a multithreaded C program using POSIX threads where multiple threads coordinate access to a shared resource using semaphores or condition variables.

The program should:

* Demonstrate thread synchronization
* Ensure safe access to shared memory
* Make threads wait when resources are unavailable
* Resume execution when signaled
* Print thread execution order
* Prevent inconsistent behavior

## Program

**File:** `producer_consumer.c`

The program implements the Producer-Consumer problem using:

* POSIX Threads (`pthread`)
* Semaphores (`sem_wait`, `sem_post`)
* Mutex (`pthread_mutex_lock`, `pthread_mutex_unlock`)

A fixed-size shared buffer is used between producer and consumer threads.

## Synchronization Mechanism

### Semaphore: empty

Tracks available empty slots in the buffer.

```text id="k1v3t3"
sem_wait(&empty)
```

causes the producer to wait when the buffer becomes full.

### Semaphore: full

Tracks available filled slots.

```text id="40oaq0"
sem_wait(&full)
```

causes the consumer to wait when the buffer is empty.

### Mutex

Protects the critical section where shared variables are modified.

```text id="l8ltmh"
buffer[]
in
out
```

Only one thread can access these shared resources at a time.

## Why Synchronization is Needed

Without synchronization:

* Producer and consumer may access the buffer simultaneously.
* Data corruption may occur.
* Items may be overwritten or skipped.
* Race conditions can lead to inconsistent results.

Using semaphores and mutexes ensures:

* Safe shared-memory access
* Proper communication between threads
* Correct execution order
* No race conditions

## Compilation

```bash id="f5og5q"
gcc producer_consumer.c -o output -pthread
```

## Execution

```bash id="8n4fkc"
./output
```

## Expected Output

```text id="8qt5wl"
Producer produced item 1 at index 0
Consumer consumed item 1 from index 0
Producer produced item 2 at index 1
Consumer consumed item 2 from index 1
...
Execution completed successfully.
```

The exact order may vary depending on thread scheduling.

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
