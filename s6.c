#include <stdio.h>

void findPairNaive(int arr[], int n, int X) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == X) {
                printf("Yes, pair (%d, %d) sums to %d.\n", arr[i], arr[j], X);
                return;
            }
        }
    }
    printf("No pair found.\n");
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 9;
    findPairNaive(arr, n, X);
    return 0;
}
