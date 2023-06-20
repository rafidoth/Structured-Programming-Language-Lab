
#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx = arr[0], mxi = 0;
    int mi = arr[0], mii = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
            mxi = i;
        }
        if(arr[i]<mi){
            mi = arr[i];
            mii = i;
        }
    }

    printf("Max:%d, Index:%d\n",mx,mxi);
    printf("Min:%d, Index:%d",mi,mii);


}
