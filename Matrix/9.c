
#include<stdio.h>
#include<math.h>

int main(){
    int n=3;

    int A[n][n],B[n][n],C[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            C[i][j] = 0;
            for(int k=0;k<n;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}







