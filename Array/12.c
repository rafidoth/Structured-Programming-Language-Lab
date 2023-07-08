#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,pos;
    printf("number: ");
    scanf("%d",&num);

    printf("position: ");
    scanf("%d",&pos);

    if(pos>n-1){
        printf("invalid position");
        return 0;
    }

    n++;
    for(int i =n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = num;
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
