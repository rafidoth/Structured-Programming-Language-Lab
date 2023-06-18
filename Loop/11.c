#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum =0;
    n++;
    while(n--){
        printf("%d",n);
        sum+= (n*n*(n+1));
    }

    printf("Result: %d\n", sum);
}
