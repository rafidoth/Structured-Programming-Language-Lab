
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int nc = n;
	double sum = 0;
	while(n--){
	    float input;
        scanf("%f",&input);
        sum+=input;
	}
	double avg = sum / nc;
	printf("AVG of %d inputs : %.6f",nc,avg);
}



