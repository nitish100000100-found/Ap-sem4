#include <stdio.h>
#include <time.h>

// Constant Time: O(1)
void constantTime(int n) {
    int x = n * n;   
}

// Linear Time: O(n)
void linearTime(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
}

// Quadratic Time: O(n^2)
void quadraticTime(int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count++;
        }
    }
}

int main() {
    int sizes[] = {1000, 5000, 10000, 20000};
    int len = sizeof(sizes) / sizeof(sizes[0]);

    clock_t start, end;
    double time_taken;

    for (int i = 0; i < len; i++) {
        int n = sizes[i];
        printf("\nInput Size n = %d\n", n);

        // O(1)
        start = clock();
        constantTime(n);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Constant Time O(1): %f seconds\n", time_taken);

        // O(n)
        start = clock();
        linearTime(n);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Linear Time O(n): %f seconds\n", time_taken);

        // O(n^2)
        start = clock();
        quadraticTime(n);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Quadratic Time O(n^2): %f seconds\n", time_taken);
    }

    return 0;
}
