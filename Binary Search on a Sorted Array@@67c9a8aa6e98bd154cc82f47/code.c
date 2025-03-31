int binarySearch(int arr[], int n, int t) {
    int high = n - 1, low = 0, mid;
    
    while (low <= high) {
        mid = (high + low) / 2;  // Correct mid calculation

        if (arr[mid] == t) 
            return mid;  // Target found

        if (t < arr[mid]) 
            high = mid - 1;  // Search left half
        else 
            low = mid + 1;  // Search right half
    }

    return -1;  // Target not found
}