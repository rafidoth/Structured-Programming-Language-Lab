#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            int temp = A[i][j];
            A[i][j] = A[i][n-j-1];
            A[i][n-j-1] = temp;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


}







