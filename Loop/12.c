
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int prev1 = 0;
    int prev2 = 1;
    for(int i=1;i<=n;i++){
        int display;
        if(i==1) display = i;
        else{
            display = prev1 + prev2;
            prev1 = prev2;
            prev2 = display;
        }

        if(i==n) printf("%d",display);
        else printf("%d, ", display);
    }
}
