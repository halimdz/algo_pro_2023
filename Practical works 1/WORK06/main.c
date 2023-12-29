#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, num;
    int sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        sum += num;
    }

    average = (float)sum / N;

    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %.2f\n", average);

 return 0;
}
