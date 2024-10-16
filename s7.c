#include <stdio.h>

void findPairTwoPointer(int arr[], int n, int X) {
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == X) {
            printf("Yes, pair (%d, %d) sums to %d.\n", arr[left], arr[right], X);
            return;
        } else if (sum < X) {
            left++;
        } else {
            right--;
        }
    }
    printf("No pair found.\n");
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 9;
    findPairTwoPointer(arr, n, X);
    return 0;
}
