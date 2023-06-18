

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int xy = x*y;
    while(x%y!=0){
        int rem = x %y;
        x = y;
        y = rem;
    }
    printf("GCD : %d",y);
    printf("\nLCM : %d",(xy)/y);

}

