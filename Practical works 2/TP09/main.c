#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    ptr:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1){
       printf("Erreur Please Enter number high than 1: ");
       goto ptr;
     }
    for(i=2; i<=n-1; i++){
            if(n%i==0)
            break;
    }

    if(n==i)
        printf("%d is prime number. ",n);
    else
        printf("%d is not prime number. ",n);

  return 0;
}



