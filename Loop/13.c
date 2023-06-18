
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    long long int fact = 1;
    printf("%d! = ",n);
    for(int i=n;i>0;i--){
        fact = fact * i;
        if(i!=1){
            printf("%d X ",i);
        }else{
            printf("1 = ");
        }
    }
    printf("%lld",fact);
}

