#include <stdio.h>
#include <stdlib.h>
#define n 10

int main() {
    int i,tableau[n];
      printf("Case : ");
    for(i = 0; i < n; i++) {
        tableau[i] = i;
          printf("%d   ", i);
    }
    printf("\n");
    printf("Tab  : ");
    for(i = 0; i < n; i++) {
       printf("%d | ",tableau[i]);
    }

    return 0;
}





