


#include <stdio.h>

int main() {
    long long int n,rev=0,N;
    scanf("%lld",&n);
    N=n;
    while(n!=0){
        int rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    if(N==rev) printf("Yes");
    else printf("No");
}

