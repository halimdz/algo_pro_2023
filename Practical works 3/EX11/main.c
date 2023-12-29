#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[3][2], B[3][2], C[3][2], i, j;
    printf("Enter the values of matrix A and B: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("A[%d][%d] = ",i, j);
            scanf("%d", &A[i][j]);
            printf("B[%d][%d] = ",i, j);
            scanf("%d", &B[i][j]);
            C[i][j]= A[i][j]+ B[i][j];
        }
    }
    printf(" Matrix A = \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++)
           printf("%d\t",A[i][j]);
        printf("\n");
    }

    printf(" Matrix B = \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++)
            printf("%d\t",B[i][j]);
        printf("\n");
    }

    printf(" A + B = \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }


    return 0;
}
