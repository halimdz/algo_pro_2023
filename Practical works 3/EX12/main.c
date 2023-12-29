#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,c1,r2,c2;
    do {
        printf("Enter the rows and columns for the first matrix A : ");
        scanf("%d %d", &r1, &c1);
        printf("Enter the rows and columns for the second matrix B : ");
        scanf("%d %d",&r2, &c2);
    }
    while(c1 != r2 );

    int A[r1][c1], B[r2][c2], C[r1][c2];
    int i,j,k,P, rc3=c1;
    printf("Enter the values of matrix A : \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("A[%d][%d] = ",i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the values of matrix B: \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("B[%d][%d] = ",i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf(" Matrix A*B = \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            P=0;
            for(k=0; k<rc3; k++){
                P=P+A[i][k]*B[k][j];
            }
            C[i][j]=P;
        }
    }

    printf(" Matrix A = \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++)
           printf("%d\t",A[i][j]);
        printf("\n");
    }

    printf(" Matrix B = \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++)
            printf("%d\t",B[i][j]);
        printf("\n");
    }

    printf(" A * B = \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }





    return 0;
}
