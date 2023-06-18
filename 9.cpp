#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n, int i) {
    if (i == 1) {
        return true;
    }
    if (n % i == 0) {
        return false;
    }
    return isPrime(n, i - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    bool prime = isPrime(n, n / 2);
    if (prime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}

