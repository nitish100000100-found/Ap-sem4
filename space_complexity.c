#include <stdio.h>

// Operation 1: Print array elements (Constant extra space)
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Operation 2: Create duplicate array (Linear extra space)
void duplicateArray(int arr[], int n) {
    int copy[n];   // Extra array -> O(n) space

    for(int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    printf("Duplicated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
}

// Operation 3: Recursive sum (Uses stack space -> O(n))
int recursiveSum(int arr[], int n) {
    if(n == 0)
        return 0;

    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Original Array: ");
    printArray(arr, n);

    duplicateArray(arr, n);

    int sum = recursiveSum(arr, n);
    printf("Recursive Sum: %d\n", sum);

    return 0;
}
