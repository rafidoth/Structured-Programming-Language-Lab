


#include <stdio.h>

int main() {
    long long int n,rev=0;
    scanf("%lld",&n);
    while(n!=0){
        int rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    printf("%lld",rev);
}

