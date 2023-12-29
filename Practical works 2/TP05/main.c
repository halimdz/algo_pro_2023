#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, PGCD;

    printf("Input two integers: \n");
    scanf("%d %d", &a, &b);
    printf("Common divisors (%d, %d):",a,b);
    for(i=1; i <= a && i <= b; ++i){
        if(a%i==0 && b%i==0){
            printf("%d ", i);
            PGCD = i;}
    }

    printf("\nPGCD (%d, %d ) = %d", a, b, PGCD);

    return 0;
}

/*int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    int a1 =a;
    int b1 =b;
    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("PGCD (%d , %d ) = %d", a1, b1, a);

    return 0;
}*/

/*int main()
{
    int a, b, i, PGCD;

    printf("Input two integers: \n");
    scanf("%d %d", &a, &b);
    int EuclidPgcd (a, b){
        if (b==0)
            return a;
        else return EuclidPgcd (b, a%b);
    }
     PGCD = EuclidPgcd (a, b);
     printf("\nPGCD (%d, %d ) = %d", a, b, PGCD);

    return 0;
}*/





























/*int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}*/


