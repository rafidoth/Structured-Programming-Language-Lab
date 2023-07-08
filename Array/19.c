#include<stdio.h>
int main(){
    int A[100],B[100], C[100];
    int n,m,c_size=0;
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
                C[c_size] = A[i];
                c_size++;
            }
        }
    }

    if(c_size==0){
        printf("Empty set");
        return 0;
    }

    for(int i =0;i<c_size;i++){
        printf("%d ",C[i]);
    }


}


