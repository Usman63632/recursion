#include <stdio.h>

void hailstoneSequence(int n) {
    printf("%d ", n);
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        hailstoneSequence(n / 2);
    } else {
        hailstoneSequence(3 * n + 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Hailstone Sequence: ");
    hailstoneSequence(n);
    printf("\n");
    return 0;
}

