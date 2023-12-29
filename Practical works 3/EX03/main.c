#include <stdio.h>
#include <stdlib.h>
#define n 20

int main() {
    int i, tab[n];
    int sum = 0;

    for(i = 0; i < n; i++) {
        sum += i;
        tab[i] = sum;
    }
    for(i = 0; i < n; i++) {
        printf("tab[%d]: %d\n", i, tab[i]);
    }

    return 0;
}

/*int main(){
    int tab[n],i,j;
    for(i=0;i<n;i++){
            tab[i]=0;
      for(j=0;j<=i;j++){
            tab[i]=tab[i]+j;
      }
    }
    printf("The table is :\n");
    for(i=0;i<n;i++){
     printf("tab[%d]: %d\n", i, tab[i]);
    }
return 0;
}
*/
