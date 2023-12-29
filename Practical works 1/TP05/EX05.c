#include <stdio.h>
#include <stdlib.h>
#define Min(x,y) (x<y ? x : y)
#define Max(x,y) (x>y ? x : y)

int main()
{

  int a,b,c, min, mid, max;

    printf("Input 3 integers:\n");
    scanf("%d %d %d",&a,&b,&c);
    while (a <= 0 || b <= 0 || c <= 0) {
    printf("Error: All three numbers must be positive and non-zero.\n");
    printf("Please input a positive non-zero number :\n ");
    scanf("%d %d %d",&a,&b,&c);}
    printf("Original order numbers: %d, %d, %d",a,b,c);
    min = Min(Min(a,b),c);
    max = Max(Max(a,b),c);
    mid = a+b+c-min-max;
    printf("\nThe numbers Sorted as ascending: %d, %d, %d",min,mid,max);




    return 0;
}
