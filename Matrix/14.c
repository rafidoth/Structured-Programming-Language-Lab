#include<stdio.h>
#define MAX 1000
int freq[MAX];

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            if(freq[arr[i][j]]==0){
                freq[arr[i][j]]++;
            }else{
                arr[i][j] = -1;
            }
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

