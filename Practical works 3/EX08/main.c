#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int T[n];

    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    printf("Original array: \n");
    for(i = 0; i < n; i++) {
        printf("%d | ",T[i]);
    }

    printf("\nPeaks in the array are: \n");
    for(i = 1; i < n-1; i++) {
        if(T[i] > T[i-1] && T[i] > T[i+1]) {
            printf("%d is a peak at index %d. \n", T[i], i);
            count++;
        }
    }

    printf("There are %d peaks in this array.", count);

    return 0;
}
