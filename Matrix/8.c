#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n],B[m][n],C[m][n];

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}







