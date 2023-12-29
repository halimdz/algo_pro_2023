#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int T1[n], T2[n];

    printf("Enter elements of first array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Enter elements of second array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &T2[i]);
    }

    printf("Common elements: ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(T1[i] == T2[j]) {
                printf("%d ", T1[i]);
                count++;
                break;
            }
        }
    }

    printf("\nNumber of common elements = %d", count);

    return 0;
}
