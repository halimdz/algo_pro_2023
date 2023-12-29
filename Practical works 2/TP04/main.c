#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, i;

    printf("Enter a positive integer: ");
    scanf("%d", &a);
    printf("The multiplication table for a number %d is: \n",a);

    for(i = 1; i <= 10; ++i)
        printf("%d * %d = %d\n", a, i, a * i);

    return 0;
}
