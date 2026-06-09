#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4
#define INCREMENTS 100000

long long counter = 0;
pthread_mutex_t mutex;

// ---------------- WITHOUT MUTEX ----------------

void* increment_without_mutex(void* arg) {
    for (int i = 0; i < INCREMENTS; i++) {
        counter++;   // Race condition
    }
    return NULL;
}

// ---------------- WITH MUTEX ----------------

void* increment_with_mutex(void* arg) {
    for (int i = 0; i < INCREMENTS; i++) {
        pthread_mutex_lock(&mutex);

        counter++;

        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];

    // ==========================
    // WITHOUT SYNCHRONIZATION
    // ==========================
    counter = 0;

    printf("Running WITHOUT mutex...\n");

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL,
                       increment_without_mutex, NULL);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Expected Counter = %d\n",
           NUM_THREADS * INCREMENTS);

    printf("Actual Counter   = %lld\n\n",
           counter);

    // ==========================
    // WITH MUTEX
    // ==========================
    counter = 0;

    pthread_mutex_init(&mutex, NULL);

    printf("Running WITH mutex...\n");

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL,
                       increment_with_mutex, NULL);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Expected Counter = %d\n",
           NUM_THREADS * INCREMENTS);

    printf("Actual Counter   = %lld\n",
           counter);

    pthread_mutex_destroy(&mutex);

    return 0;
}
