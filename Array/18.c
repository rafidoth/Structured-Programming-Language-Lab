#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }
        }
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


}

