#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int firstTime = 1;
    for(int i =0;i<n;i++){
        if(arr[i]==target){
            if(firstTime){
                printf("FOUND at index position: %d",i);
                firstTime= 0;
                continue;
            }

            printf(", %d",i);
        }
    }

    if(firstTime) printf("NOT FOUND");

}
