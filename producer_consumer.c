#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5
#define ITEMS 10

int buffer[BUFFER_SIZE];

int in = 0;
int out = 0;

// Semaphores
sem_t empty;
sem_t full;

// Mutex lock
pthread_mutex_t mutex;

void* producer(void* arg)
{
    int item;

    for(int i = 1; i <= ITEMS; i++)
    {
        item = i;

        // wait if buffer is full
        sem_wait(&empty);

        // lock critical section
        pthread_mutex_lock(&mutex);

        buffer[in] = item;

        printf("Producer produced item %d at index %d\n", item, in);

        in = (in + 1) % BUFFER_SIZE;

        // unlock critical section
        pthread_mutex_unlock(&mutex);

        // increase full count
        sem_post(&full);

        sleep(1);
    }

    pthread_exit(NULL);
}

void* consumer(void* arg)
{
    int item;

    for(int i = 1; i <= ITEMS; i++)
    {
        // wait if buffer is empty
        sem_wait(&full);

        // lock critical section
        pthread_mutex_lock(&mutex);

        item = buffer[out];

        printf("Consumer consumed item %d from index %d\n", item, out);

        out = (out + 1) % BUFFER_SIZE;

        // unlock critical section
        pthread_mutex_unlock(&mutex);

        // increase empty count
        sem_post(&empty);

        sleep(2);
    }

    pthread_exit(NULL);
}

int main()
{
    pthread_t producer_thread;
    pthread_t consumer_thread;

    // initialize semaphores
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    // initialize mutex
    pthread_mutex_init(&mutex, NULL);

    // create threads
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    // wait for threads
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    // destroy semaphore and mutex
    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);

    printf("\nExecution completed successfully.\n");

    return 0;
}
