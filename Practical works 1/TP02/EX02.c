#include <stdio.h>
#include <stdlib.h>

// TP02.a:
int main()
{
   int a, b;
   printf("Enter two integers to swap: ");
   scanf("%d %d", &a, &b);
   printf("Before swap a=%d b=%d \n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swap a=%d b=%d",a,b);

return 0;
}

// TP02.b
int main() {

   int x, y, z, t;
   printf("Enter the values of x, y, and z: ");
   scanf("%d %d %d", &x, &y, &z);
   printf("Before circular permutation: x = %d, y = %d, z= %d\n", x, y, z);
   t = x;
   x = z;
   z = y;
   y = t;
   printf("After circular permutation: x = %d, y = %d, z =%d\n", x, y, z);

   return 0;
}
