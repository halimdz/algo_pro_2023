#include <stdio.h>
#include <stdlib.h>
#define n 6

int main(){

    int t[n],i,j,x;
    printf("Please enter the table:\n");
    for(i=0;i<n;i++){
        printf("Tab[%d]: ",i);
        scanf("%d",&t[i]);
    }
    printf("Give the number to delete: ");
    scanf("%d",&x);
    i=0;
    while(i<n && t[i]!=x){
       i=i+1;
    }
    if(i==n)printf("The value %d does not exist in the table",x);
    else{
        for(j=i;j<n-1;j++){
            t[j]=t[j+1];
        }
        t[n-1]=0;
        printf("The table after removing %d is:\n",x);
        for(i=0;i<n;i++){
            printf("%d | ",t[i]);
        }
    }
    return 0;
}
