#include<stdio.h>
#include<math.h>

int main(){
    int n =3;

    int a[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]) - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+ a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("%d",det);
}





