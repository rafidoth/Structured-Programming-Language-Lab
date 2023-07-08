File name : 1.c
```c
#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

}

```
File name : 2.c
```c

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}

```
File name : 3.c
```c

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}

```
File name : 4.c
```c


#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    float sum = 0;
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("%.2f",sum/n);
}
//8
//2.1  8.3  3.7  9.2  0.6  1.5  6.4  10.1

```
File name : 5.c
```c
#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}

```
File name : 6.c
```c



#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        arr[i] = arr1[i] + arr2[i];
        printf("%d ",arr[i]);
    }
}

```
File name : 7.c
```c
#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}

```
File name : 8.c
```c

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

```
File name : 9.c
```c

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    char vowels[10] = "AEIOUaeiou";
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j = 0; j<10;j++){
            if(vowels[j]==arr[i]){
                count++;
            }
        }
    }
    printf("Count: %d",count);
}

```
File name : 10.c
```c
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

```
File name : 11.c
```c
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

```
File name : 12.c
```c
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

```
File name : 13.c
```c
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

```
File name : 14.c
```c
#include<stdio.h>
int main(){
    int A[100], B[100];
    int n,m ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(int i =0;i<m;i++){
        scanf("%d",&B[i]);
    }
    int mx = (m>n)?m:n;
    for(int i =0; i<mx;i++){
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    printf("Array A: ");
    for(int i =0;i<m;i++){
        printf("%d ",A[i]);
    }
    printf("\nArray B: ");
    for(int i =0;i<n;i++){
        printf("%d ",B[i]);
    }

}


```
File name : 15.c
```c

#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%3==0) arr[i] = -1;
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


}

```
File name : 16.c
```c


#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        if(i%2!=0){
            arr[i] = 0;
        }
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


}

```
File name : 17.c
```c
#include<stdio.h>
int main(){
    int arr[100];
    int n ;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int step =0;step<n-1;step++){
        for(int i =0;i<n-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }


}

```
File name : 18.c
```c
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


```
File name : 19.c
```c
#include<stdio.h>
int main(){
    int A[100],B[100], C[100];
    int n,m,c_size=0;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(int i =0;i<m;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(A[i]==B[j]){
                C[c_size] = A[i];
                c_size++;
            }
        }
    }

    if(c_size==0){
        printf("Empty set");
        return 0;
    }

    for(int i =0;i<c_size;i++){
        printf("%d ",C[i]);
    }


}



```
File name : 20.c
```c
#include<stdio.h>
int main(){
    int A[100],B[100];
    int n,m;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    for(int i =0;i<m;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(A[i]==B[j]){
                B[j] = -1;
            }
        }
    }

    int k=0;
    for(int i = 0;i<m;i++){
        if(B[i]!=-1){
            A[n+k] = B[i];
            k++;
        }
    }


    for(int i =0;i<n+k;i++){
        printf("%d ",A[i]);
    }


}




```
