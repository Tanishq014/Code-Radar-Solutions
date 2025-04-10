int kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        return (x1 == x2) ? 0 : -1; // Same velocity: check if they start at the same position
    }
    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) > 0) {
        return (x2 - x1) / (v1 - v2); // Calculate the meeting point
    }
    return -1; // They will never meet
}
