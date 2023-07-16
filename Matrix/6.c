#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i][i]);
    }
    printf("\nMinor Diagonal: ");
    int j =n-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][j]);
        j--;
    }

}






