
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int result = 1;
    for(int i =1;i<=y;i++){
        result*=x;
    }
    printf("%d",result);
}

