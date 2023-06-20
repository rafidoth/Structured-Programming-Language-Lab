

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    float sum = 0;
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("%.2f",sum/n);
}
//8
//2.1  8.3  3.7  9.2  0.6  1.5  6.4  10.1
