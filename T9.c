#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 20, 5, 30, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum element: %d\n", findMax(arr, size));

    return 0;
}
