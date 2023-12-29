#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int T[n];

    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d | ",T[i]);
    }

    j=n-1;

    for(i = 0; i < n/2; i++) {
        temp = T[i];
        T[i] = T[j-i];
        T[j-i] = temp;
    }

    printf("\nReversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d | ",T[i]);
    }

    return 0;
}
