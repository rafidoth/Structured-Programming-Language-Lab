#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    float arr[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%f",&arr[i][j]);
        }
    }

    //row=i, col=j
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i>j){
                float c = arr[i][j]/arr[j][j];
                for(int k=0;k<n;k++){
                    arr[i][k]= arr[i][k]-c*arr[j][k];
                }
            }
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

    float det = 1;
    for(int i=0;i<n;i++){
        det*=arr[i][i];
    }

    printf("%d",(int)ceil(det));
}




