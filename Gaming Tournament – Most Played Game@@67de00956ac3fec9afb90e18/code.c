int mostPlayedGame(int games[], int n) {
    int freq[1001] = {0}; // Assuming game IDs are in the range 1 to 1000
    int maxFreq = 0;
    int result = 1001; // Initialize with a value greater than the maximum possible game ID

    // Count frequencies of each game
    for (int i = 0; i < n; i++) {
        freq[games[i]]++;
        if (freq[games[i]] > maxFreq || 
           (freq[games[i]] == maxFreq && games[i] < result)) {
            maxFreq = freq[games[i]];
            result = games[i];
        }
    }

    return result;
}