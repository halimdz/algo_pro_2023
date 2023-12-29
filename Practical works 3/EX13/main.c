#include <stdio.h>
#include <stdlib.h>

int main(){
   int n=4;
   int A[n][n], i, j;
    printf("Enter the values of matrix A: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d] = ",i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf(" Matrix A = \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
           printf("%d\t",A[i][j]);
        printf("\n");
    }

   //Tranposing the matrix
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
      }
    }

   printf("Tranposing the matrix A:\n");
   printf(" Matrix A = \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
           printf("%d\t",A[i][j]);
        printf("\n");
    }

   //Reversing each row of the matrix
   for(i=0;i<n;i++){
     int index = 0, size = n-1;
     while(index < size){
       int temp = A[i][index];
       A[i][index] = A[i][size];
       A[i][size] = temp;
       index++;
       size--;
     }
   }

   //Print the matrix
   printf("Rotated Matrix A:\n");
   printf(" Matrix A = \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
           printf("%d\t",A[i][j]);
        printf("\n");
    }

   return 0;
}



