#include <stdio.h>
#include <stdlib.h>

/*int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("%d is a leap year.\n", year);
            else
                printf("%d is not a leap year.\n", year);
        }
        else
            printf("%d is a leap year.\n", year);
    }
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}*/


int main()  {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year%4 == 0)&& ((year%400 == 0)||(year%100 !=0 )))
        printf("%d is a leap year", year);
        else
        printf("%d is not a leap year", year);

    return 0;
}
