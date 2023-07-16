#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n];
    int max = A[0][0];
    int loc_i = 0;
    int loc_j = 0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j]>max){
                max = A[i][j];
                loc_i = i;
                loc_j = j;
            }

        }
    }

    printf("Max: %d",max);
    printf("\nLocation: [%d][%d]",loc_i,loc_j);

}







