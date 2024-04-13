#include <stdio.h>

int binarySearch(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; // Element found, return the index
        } else if (arr[mid] < x) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int index = binarySearch(arr, n, x);
    if (index == -1) {
        printf("Element %d not found in the array.\n", x);
    } else {
        printf("Element %d found at index %d.\n", x, index);
    }

    return 0;
}