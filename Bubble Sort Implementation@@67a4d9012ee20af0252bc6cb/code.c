#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Run (n-1) times
        for (int j = 0; j < n - i - 1; j++) { // Last i elements are sorted
            if (arr[j] > arr[j + 1]) { // Correct comparison
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Print newline correctly
}

// Main function
int main() {
    int n;
    
    // Taking input for array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    bubbleSort(arr, n);

    // Printing the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
