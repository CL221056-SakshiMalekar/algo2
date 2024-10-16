#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i + 1; // 1-based index
        }
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findEquilibriumIndex(arr, n);
    printf("Equilibrium index: %d\n", result);
    return 0;
}
