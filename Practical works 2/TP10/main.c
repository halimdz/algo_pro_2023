#include <stdio.h>

int main()
{
    int m,n,i,j;
    ptr:
    printf("Enter a interval [m....n]: ");
    scanf("%d%d",&m,&n);
    printf("Prime numbers between [%d ... %d] are: ", m, n);
    if(n<=m){
        printf("Erreur Pleas Enter a m < n: ");
        goto ptr;
    }
    for(i=m; i<=n; i++){
            if(i==0 || i==1)
                continue;
            for(j=2; j<=i-1; j++){
              if(i%j==0)
                break;
            }
            if(i==j)
               printf("%d ",i);

    }

  return 0;
}










/*
#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for(int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial of %d = %lld", num, factorial(num));
    return 0;
}
*/
