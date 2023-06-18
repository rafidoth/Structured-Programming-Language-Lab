

#include <stdio.h>

int main() {
    int n=1;
    while(1){
        char ch;
        scanf("%c",&ch);
        fflush(stdin);
        if(ch!='A') printf("input %d: %c\n",n++,ch);
        else break;
    }

}

