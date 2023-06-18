

#include <stdio.h>



int main() {
    int n,r;
    scanf("%d %d",&n,&r);
    long long int nfact = 1;
    for(int i=n;i>0;i--){
        nfact = nfact * i;
    }
//    printf("%lld\n",nfact);
    long long int rfact = 1;
    for(int i=r;i>0;i--){
        rfact = rfact * i;
    }
//    printf("%lld\n",rfact);
    long long int n_rfact = 1;
    for(int i=(n-r);i>0;i--){
        n_rfact = n_rfact * i;
    }
//    printf("%lld\n",n_rfact);
    printf("%lld\n",nfact/(rfact * n_rfact));
}

