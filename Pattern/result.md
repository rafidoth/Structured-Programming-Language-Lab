File name : 1.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}





```
File name : 2.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        for(int j = i;j<=i+n-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}





```
File name : 3.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        for(int j = i;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}





```
File name : 4.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j<=n-i) printf("_");
            else printf("%d",i);
        }
        printf("\n");
    }

}






```
File name : 5.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = n;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("%d",k);
            k--;
        }
        k=n;
        printf("\n");
    }

}






```
File name : 6.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}






```
File name : 7.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

}







```
File name : 8.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = 0;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n-k;j++){
            printf("*");
        }
        k++;
        printf("\n");
    }

}







```
File name : 9.c
```c
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i%2!=0)
            {
                if(j%2==0) printf("0");
                else printf("1");
            }
            else
            {
                if(j%2==0) printf("1");
                else printf("0");
            }

        }
        printf("\n");
    }

}








```
File name : 10.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j<=n-i){
                printf("_");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

}







```
File name : 11.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k =0;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n+k;j++){
            if(j<=n-i){
                printf("_");
            }else{
                printf("*");
            }
        }
        k++;
        printf("\n");
    }

}







```
File name : 12.c
```c
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int n= (m/2)+1,k =0;
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=n+k;j++){
            if(i<=n){
                if(j<=n-i ){
                    printf("_");
                }else{
                    printf("*");
                }
            }else{
                if(j<=i-n){
                    printf("_");
                }else{
                    printf("*");
                }
            }

        }
        if(i>=n) k--;
        else k++;
        printf("\n");
    }

}







```
File name : 13.c
```c

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=2*n-1;j++){
            if(j<=i){
                printf("%d",j);
            }else if(j>=2*n-i){
                printf("%d",2*n-j);
            }else{
                printf("_");
            }
        }

        printf("\n");
    }

}







```
File name : 14.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);


    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i%2==0) (j==1 || j==n)? printf("*"):printf("_");
            else printf("*");
        }
        printf("\n");
    }

}







```
File name : 15.c
```c
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);


    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==1 || i==n) printf("Z");
            else if (j==n-i+1) printf("Z");
            else printf(" ");
        }
        printf("\n");
    }

}








```
File name : 16.c
```c

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);


    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j || j== n-i+1) printf("*");
            else printf("_");
        }
        printf("\n");
    }

}







```
File name : 17.c
```c
#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int n= (m/2)+1,k =0;
    int q = 0;
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            if(i<=n){
                if(j<=n-i || j>=m-n+i+1){
                    printf("_");
                }else{
                    if(j==n || j==n-i+1 || j==n+i-1) printf("$");
                    else printf("_");
                }
            }else{
                if(j<=i-n || j>=m+n-i+ 1){
                    printf("_");
                }else{
                    if(j==n || j==i-n+1|| j==3*n-i-1)
                        printf("$");
                    else printf("_");
                }
            }
        }
        if(i>=n) k--;
        else k++;
        printf("\n");
    }

}







```
File name : 18.c
```c



#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = (n/2)+1;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==k) printf("H");
            else if( j==1 || j==n) printf("H");
            else printf(" ");
        }
        printf("\n");
    }

}







```
