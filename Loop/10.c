#include <stdio.h>

int main() {
   int n ;
   scanf("%d",&n);
   if(n%2==0){
    printf("Result: -%d",n/2);
   }else{
    printf("Result: %d",(n/2)+1);
   }
}

