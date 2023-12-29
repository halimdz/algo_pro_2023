#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,n;
   int power=1;
   float powerf=1.0;
   printf("Input the integer x: ");
   scanf("%d", &x);
   printf("Input the exponent n: ");
   scanf("%d", &n);
   int expo = n;
   if (n==0) printf("%d ^ %d = %d",x, n, 1);
   else if(n>0){
   while (expo!= 0){
        power = power*x;
        expo--;}
   printf("%d ^ %d = %d",x, n, power);
   }else
   {
   while (expo!= 0){
        powerf = powerf*(1.0/x);
        expo++;}
   printf("%d ^ %d = %f",x, n, powerf);
   }
    return 0;
}


/*int main()
{
   int x,n,i;
   int power=1;
   float powerf=1.0;
   printf("Input the integer x: ");
   scanf("%d", &x);
   printf("Input the exponent n: ");
   scanf("%d", &n);
   if (n==0) printf("%d ^ %d = %d",x, n, 1);
   else if(n>0){
        for(i=1; i<=n; i++){
        power = power*x;}
        printf("%d ^ %d = %d",x, n, power);
        }else {
            for(i=-1; i>=n; i--){
            powerf = powerf*(1.0/x);}
            printf("%d ^ %d = %f",x, n, powerf);
         }

return 0;
}*/



/*int main()
{
    float pow (x, n){
        float power=1.0;
        int i;
        if (n==0) return 1.0;
        else if(n>0){
             for(i=1; i<=n; i++){
             power = power*x;}
             return power;}
             else{
                for(i=-1; i>=n; i--){
                power = power*(1.0/x);}
                return power;}
    }

   int x,n;
   printf("Input the integer x: ");
   scanf("%d", &x);
   printf("Input the exponent n: ");
   scanf("%d", &n);
   printf("%d ^ %d = %f",x, n, pow (x, n));


return 0;
}*/
