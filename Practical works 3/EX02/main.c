#include <stdio.h>
#include <stdlib.h>
#define n 5

int main() {
    int i, tab[n];
    printf("Enter 05 integers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    i=0;
    while(i<n && tab[i]>=0){
      i=i+1;
    }

    if(i==n)
        printf("All elements are positive or zero.\n");
     else
        printf("Not all elements are positive or zero.\n");


    return 0;
}
