#include<stdio.h>
int main(){
    int A[100],B[100];
    int n,m;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(int i =0;i<m;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(A[i]==B[j]){
                B[j] = -1;
            }
        }
    }

    int k=0;
    for(int i = 0;i<m;i++){
        if(B[i]!=-1){
            A[n+k] = B[i];
            k++;
        }
    }


    for(int i =0;i<n+k;i++){
        printf("%d ",A[i]);
    }


}



