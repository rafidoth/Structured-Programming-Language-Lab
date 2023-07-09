#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int n= (m/2)+1,k =0;
    int q = 0;
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            if(i<=n){
                if(j<=n-i || j>=m-n+i+1){
                    printf("_");
                }else{
                    if(j==n || j==n-i+1 || j==n+i-1) printf("$");
                    else printf("_");
                }
            }else{
                if(j<=i-n || j>=m+n-i+ 1){
                    printf("_");
                }else{
                    if(j==n || j==i-n+1|| j==3*n-i-1)
                        printf("$");
                    else printf("_");
                }
            }
        }
        if(i>=n) k--;
        else k++;
        printf("\n");
    }

}






