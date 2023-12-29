#include <stdio.h>
#include <stdlib.h>


int main()
{
    float scores[20], score, min, max, avg, sum = 0;
    int i, count = 0;
    printf("Enter the exam scores of 20 students: \n");
    for(i = 0; i < 20; i++) {
            ptr:
        scanf("%f", &score);
        if (score>=0 &&  score<= 20){
           scores[i] =  score;
           sum += scores[i];
        } else{
             printf("Erreur the exam scores must be 0 <=scores<= 20 : \n");
             goto ptr;
             }

    }
    for(i=0;i<20;i++){
            printf("%.2f | ",scores[i]);

    }
    printf("\n");
    avg = sum / 20;
    min = max = scores[0];


    for(i = 1; i < 20; i++) {
        if(scores[i] < min)
            min = scores[i];
        if(scores[i] > max)
            max = scores[i];
    }
    for(i = 0; i < 20; i++) {
        if(scores[i] >= avg)
            count++;
    }

    printf("Average score = %.2f\n", avg);
    printf("Minimum score = %.2f\n", min);
    printf("Maximum score = %.2f\n", max);
    printf("Number of scores >= average:%.2f = %d\n", avg, count);


return 0;
}
