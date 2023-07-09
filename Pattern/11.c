#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k =0;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n+k;j++){
            if(j<=n-i){
                printf("_");
            }else{
                printf("*");
            }
        }
        k++;
        printf("\n");
    }

}






