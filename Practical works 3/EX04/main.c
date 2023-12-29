#include <stdio.h>
#include <stdlib.h>
#define n 6

int main() {
    int tab[n], i, min, max, sum = 0;

    printf("Input 6 integers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        sum += tab[i];
    }

    min = tab[0];
    max = tab[0];

    for(i = 1; i < n; i++) {
        if(tab[i] < min)
            min = tab[i];
        if(tab[i] > max)
            max = tab[i];
    }

    printf("Sum = %d\n", sum);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}
