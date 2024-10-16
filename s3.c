#include <stdio.h>
#include <limits.h>

int partition(int* nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (nums[j] >= pivot) {
            i++;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    int temp = nums[i + 1];
    nums[i + 1] = nums[right];
    nums[right] = temp;
    return i + 1;
}

int findKthLargest(int* nums, int numsSize, int k) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int pivotIndex = partition(nums, left, right);
        if (pivotIndex == k - 1) {
            return nums[pivotIndex];
        } else if (pivotIndex < k - 1) {
            left = pivotIndex + 1;
        } else {
            right = pivotIndex - 1;
        }
    }
    return INT_MIN; // In case of error
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int result = findKthLargest(nums, sizeof(nums)/sizeof(nums[0]), k);
    printf("The %dth largest element is: %d\n", k, result);
    return 0;
}
