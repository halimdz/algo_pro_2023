#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int count = 0;
    printf("Input an integer: ");
    scanf("%d", &a);
    if(a==0) printf("The number of digits in %d is %d",a, count+1);
    else{
      int a1=a;
      while(a1>0){
        a1 = a1/10;
        count++;
      }

     printf("The number of digits in %d is %d",a, count);
 }



  return 0;
}
