
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=2*n-1;j++){
            if(j<=i){
                printf("%d",j);
            }else if(j>=2*n-i){
                printf("%d",2*n-j);
            }else{
                printf("_");
            }
        }

        printf("\n");
    }

}






