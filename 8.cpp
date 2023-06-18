#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num, 0);
    printf("Reversed number: %d\n", reversed);
    return 0;
}

