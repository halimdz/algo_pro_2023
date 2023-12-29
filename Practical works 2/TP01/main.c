#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, max;
    printf("Enter three positive numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) max= a;
        else max= b;
    if (max>c) printf("Maximum number is %d",max);
      else printf("Maximum number is %d",max=c);

    return 0;
}
