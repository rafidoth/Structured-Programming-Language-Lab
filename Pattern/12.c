#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int n= (m/2)+1,k =0;
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=n+k;j++){
            if(i<=n){
                if(j<=n-i ){
                    printf("_");
                }else{
                    printf("*");
                }
            }else{
                if(j<=i-n){
                    printf("_");
                }else{
                    printf("*");
                }
            }

        }
        if(i>=n) k--;
        else k++;
        printf("\n");
    }

}






