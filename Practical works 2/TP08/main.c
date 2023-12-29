#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, n1, remainder, result = 0;

    printf("Input an number: ");
    scanf("%d", &n);
    n1 = n;

    while (n1 != 0) {
        remainder = n1 % 10;
        result = result * 10 + remainder;
        n1 /= 10;}

    if (result == n)
        printf("%d is a palindrome", n);
    else
        printf("%d is not a palindrome", n);

    return 0;
}







