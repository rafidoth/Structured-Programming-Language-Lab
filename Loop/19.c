#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    double sin_value = 0;
    double upTerm = x;
    long long int fact = 1;
    for(int i=1;i<=50;i+=2){
        sin_value+=(upTerm/fact);
        fact*= (i+1)*(i+2);
        upTerm *= -x*x;
    }
    printf("%lf",sin_value);
}


