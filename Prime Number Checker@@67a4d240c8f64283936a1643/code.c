#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2) return 1; // 2 is prime
    if (num % 2 == 0) return 0; // Even numbers > 2 are not prime

    for (int i = 3; i * i <= num; i += 2) { // Check only odd numbers
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Number? ");
    scanf("%d", &num);

    printf("%d", isPrime(num));
    return 0;
}
