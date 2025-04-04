int mostPlayedGame(int games[], int n) {
    int freq[100] = {0}; // Assuming game IDs are between 0 and 99
    int maxFreq = 0;
    int result = 0;

    // Count frequencies of each game
    for (int i = 0; i < n; i++) {
        freq[games[i]]++;
        if (freq[games[i]] > maxFreq || 
           (freq[games[i]] == maxFreq && games[i] > result)) {
            maxFreq = freq[games[i]];
            result = games[i];
        }
    }

    return result;
}
