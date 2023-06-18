
#include <stdio.h>

int main() {
    int X,N;
    scanf("%d %d",&X, &N);
    while(N--){
        int inp;
        scanf("%d",&inp);
        if(inp==X){
            printf("Right, Player-2 wins!\n");
            return 0;
        }else{
            printf("Wrong, %d Choice(s) Left!\n",N);
        }

    }
    printf("Player-1 wins!");
}
