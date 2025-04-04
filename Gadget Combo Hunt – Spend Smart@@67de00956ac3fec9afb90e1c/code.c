int maxGadgetSpend(int key[], int n, int head[], int m, int budget) {   
    int max = 0;
    int found = 0; // Variable to track if a valid combination is found

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = key[i] + head[j]; // Calculate the sum once
            if (sum > max && sum < budget) {
                max = sum;
                found = 1; // Mark that a valid combination was found
            }
        }
    }

    if (found == 0) {
        return -1; // No valid combination found
    } else {
        return max; // Return the maximum valid spend
    }
}
