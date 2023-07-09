


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = (n/2)+1;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==k) printf("H");
            else if( j==1 || j==n) printf("H");
            else printf(" ");
        }
        printf("\n");
    }

}






