#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("position: ");
    scanf("%d",&pos);

    if(pos>n-1){
        printf("invalid position");
        return 0;
    }

    for(int i = pos; i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
