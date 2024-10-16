#include <stdio.h>

void maxSumKConsecutive(int arr[], int n, int k) {
    if (k > n) {
        printf("Invalid\n");
        return;
    }

    int max_sum = 0, window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);
}

int main() {
    int arr1[] = {100, 200, 300, 400};
    maxSumKConsecutive(arr1, sizeof(arr1) / sizeof(arr1[0]), 2);

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    maxSumKConsecutive(arr2, sizeof(arr2) / sizeof(arr2[0]), 4);

    int arr3[] = {2, 3};
    maxSumKConsecutive(arr3, sizeof(arr3) / sizeof(arr3[0]), 3);

    return 0;
}
