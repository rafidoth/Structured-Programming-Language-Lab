#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}