#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
         printf("Not Prime");
         return 0;
    }
    else{
        for(int i = 2;i<n;i++){
            if(n%i==0){
                 printf("Not prime");
                 return 0;
            }
        }
    }
    printf("Prime");
}

