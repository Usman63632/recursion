#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    printf("\n");
    return 0;
}

