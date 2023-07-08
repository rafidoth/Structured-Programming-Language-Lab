
#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%3==0) arr[i] = -1;
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


}
