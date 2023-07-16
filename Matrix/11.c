#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];
    if(n%2==0){
        printf("%d is not an odd number");
        reutrn 0;
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum =0;
    int k = n-1;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==0|| i==n-1)
                sum+=arr[i][j];
            else if(i==j)
                sum+= arr[i][j];
            else if(j==k)
                sum+= arr[i][k];

        }
        k--;
    }
    printf("%d",sum);

}








