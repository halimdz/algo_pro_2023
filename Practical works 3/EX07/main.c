#include <stdio.h>
#include <stdlib.h>
#define n 10
int main(){

    int t[n],i,j=0,k=n-1,a;
    printf("Please enter the table:\n");
    for(i=0;i<n;i++){
      printf("Value of tab[%d] : ",i);
      scanf("%d",&a);
      if(a>=0){
        t[j]=a;
        j=j+1;
      }
      else{
        t[k]=a;
        k=k-1;
      }
    }
    printf("The table entered is:\n");
    for(i=0;i<n;i++){
        printf("%d | ",t[i]);
    }
    return 0;
}
