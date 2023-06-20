#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        arr2[n-1-i] = arr[i];
    }

    printf("Array A : ");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);

    }

    printf("\nArray B : ");
    for(int i=0;i<n;i++){
        printf(" %d",arr2[i]);

    }
}
