#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n], T[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            T[i][j] = arr[j][i];
        }
    }
    int flag = 1;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(T[i][j] != arr[i][j]){
                flag= 0;
            }
        }
    }

    (flag)? printf("YES"): printf("NO");
}
