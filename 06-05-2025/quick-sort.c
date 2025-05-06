#include <stdio.h>

#define N 100

void QuickSort(int *arr, int low, int high);
void copyArray(int *source, int *dest, int size);

int main() {
    int arr[] = {2, 7, 3, 9, 8, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: { ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    QuickSort(arr, 0, length - 1);

    printf("Sorted array: { ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    return 0;
}

void QuickSort(int *arr, int low, int high) {
    // Base case: if the array has 0 or 1 element, it's already sorted
    if (low >= high) {
        return;
    }
    
    // Create temporary arrays for left and right partitions
    int leftArr[N], rightArr[N];
    int li = 0, ri = 0;
    
    // Choose middle element as pivot
    int pivotIndex = low + (high - low) / 2;
    int pivot = arr[pivotIndex];
    
    // Partition the array
    for (int i = low; i <= high; i++) {
        if (i == pivotIndex) {
            continue; // Skip the pivot element
        }
        
        if (arr[i] < pivot) {
            leftArr[li++] = arr[i];
        } else {
            rightArr[ri++] = arr[i];
        }
    }
    
    // Create and fill the return array
    int returnArr[N];
    int index = 0;
    
    // Recursively sort left partition
    if (li > 0) {
        QuickSort(leftArr, 0, li - 1);
    }
    
    // Copy sorted left partition to return array
    for (int i = 0; i < li; i++) {
        returnArr[index++] = leftArr[i];
    }
    
    // Add pivot
    returnArr[index++] = pivot;
    
    // Recursively sort right partition
    if (ri > 0) {
        QuickSort(rightArr, 0, ri - 1);
    }
    
    // Copy sorted right partition to return array
    for (int i = 0; i < ri; i++) {
        returnArr[index++] = rightArr[i];
    }
    
    // Copy the return array back to the original array
    for (int i = 0; i < index; i++) {
        arr[low + i] = returnArr[i];
    }
}