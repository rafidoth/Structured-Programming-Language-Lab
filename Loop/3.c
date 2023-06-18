#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    int x;
        if(i%2==0) x=0;
        else x = 1;

        if(i==n) printf("%d",x);
        else printf("%d, ",x);
	}
}


