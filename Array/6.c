


#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        arr[i] = arr1[i] + arr2[i];
        printf("%d ",arr[i]);
    }
}
