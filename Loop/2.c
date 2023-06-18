

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int x = 1;
	for(int i=1;i<=n;i++){
        if(i==n){
            printf("%d", x);
        }else{
            printf("%d,", x);
        }
        x+=2;
	}
}


