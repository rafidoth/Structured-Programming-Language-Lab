# Structured-Programming-Language-Lab
 
Solution of problemset provided in SPL Lab (CSE 1112)

_**Disclaimer:** All the solutions provided in this repo are given by me. They are not guaranteed to be 100% correct or highly efficient. Please use them as a starting point and do your own testing and debugging. You can also take help from other sources to make your code more efficient._

Table of Contents
- [Loop Related Problems](#loop)
- [Array Related Problems](#array)
- [Pattern Problems](#pattern)



---

# Loop
### [Problemset Link](https://github.com/rafidoth/Structured-Programming-Language-Lab/blob/main/Loop/04%20Loop.docx.pdf) 
File name : 1.c
```c

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==n){
			printf("%d",i);
			break;
		}
		printf("%d, ",i);
	}
}



```
File name : 2.c
```c


#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int x = 1;
	for(int i=1;i<=n;i++){
        if(i==n){
            printf("%d", x);
        }else{
            printf("%d,", x);
        }
        x+=2;
	}
}



```
File name : 3.c
```c
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    int x;
        if(i%2==0) x=0;
        else x = 1;

        if(i==n) printf("%d",x);
        else printf("%d, ",x);
	}
}



```
File name : 4.c
```c

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int nc = n;
	double sum = 0;
	while(n--){
	    float input;
        scanf("%f",&input);
        sum+=input;
	}
	double avg = sum / nc;
	printf("AVG of %d inputs : %.6f",nc,avg);
}




```
File name : 5.c
```c
#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    while(x!=y){
        printf("%d, ",x*x);
        (x>y)? x-- : x++;
    }
    printf("Reached!");
}

```
File name : 6.c
```c

#include <stdio.h>

int main() {
    int X,N;
    scanf("%d %d",&X, &N);
    while(N--){
        int inp;
        scanf("%d",&inp);
        if(inp==X){
            printf("Right, Player-2 wins!\n");
            return 0;
        }else{
            printf("Wrong, %d Choice(s) Left!\n",N);
        }

    }
    printf("Player-1 wins!");
}

```
File name : 7.c
```c


#include <stdio.h>

int main() {
    int n=1;
    while(1){
        char ch;
        scanf("%c",&ch);
        fflush(stdin);
        if(ch!='A') printf("input %d: %c\n",n++,ch);
        else break;
    }

}


```
File name : 8.c
```c



#include <stdio.h>

int main() {
    long long int n,rev=0;
    scanf("%lld",&n);
    while(n!=0){
        int rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    printf("%lld",rev);
}


```
File name : 9.c
```c




#include <stdio.h>

int main() {
   int n ;
   scanf("%d",&n);
   int serial = 1;
   while(n--){
       float a,hw, ct,mt,tf;
       scanf("%f %f %f %f %f",&a,&hw,&ct,&mt,&tf);
       float marks = (a)+ (hw) + (ct)+(mt*0.6)+(tf*0.4);
       char Grade;
       if(marks<55) Grade = 'F';
       else if (marks>=55 && marks <= 61) Grade = 'D';
       else if (marks>=62 && marks <= 73) Grade = 'C';
       else if (marks>=74 && marks <= 85) Grade = 'B';
       else if (marks>=86 && marks <= 100) Grade = 'A';

       printf("\nStudent %d : %c\n",serial++, Grade);
   }

}


```
File name : 10.c
```c
#include <stdio.h>

int main() {
   int n ;
   scanf("%d",&n);
   if(n%2==0){
    printf("Result: -%d",n/2);
   }else{
    printf("Result: %d",(n/2)+1);
   }
}


```
File name : 11.c
```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum =0;
    n++;
    while(n--){
        printf("%d",n);
        sum+= (n*n*(n+1));
    }

    printf("Result: %d\n", sum);
}

```
File name : 12.c
```c

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int prev1 = 0;
    int prev2 = 1;
    for(int i=1;i<=n;i++){
        int display;
        if(i==1) display = i;
        else{
            display = prev1 + prev2;
            prev1 = prev2;
            prev2 = display;
        }

        if(i==n) printf("%d",display);
        else printf("%d, ", display);
    }
}

```
File name : 13.c
```c

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    long long int fact = 1;
    printf("%d! = ",n);
    for(int i=n;i>0;i--){
        fact = fact * i;
        if(i!=1){
            printf("%d X ",i);
        }else{
            printf("1 = ");
        }
    }
    printf("%lld",fact);
}


```
File name : 14.c
```c


#include <stdio.h>



int main() {
    int n,r;
    scanf("%d %d",&n,&r);
    long long int nfact = 1;
    for(int i=n;i>0;i--){
        nfact = nfact * i;
    }
//    printf("%lld\n",nfact);
    long long int rfact = 1;
    for(int i=r;i>0;i--){
        rfact = rfact * i;
    }
//    printf("%lld\n",rfact);
    long long int n_rfact = 1;
    for(int i=(n-r);i>0;i--){
        n_rfact = n_rfact * i;
    }
//    printf("%lld\n",n_rfact);
    printf("%lld\n",nfact/(rfact * n_rfact));
}


```
File name : 15.c
```c

#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int result = 1;
    for(int i =1;i<=y;i++){
        result*=x;
    }
    printf("%d",result);
}


```
File name : 16.c
```c


#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int xy = x*y;
    while(x%y!=0){
        int rem = x %y;
        x = y;
        y = rem;
    }
    printf("GCD : %d",y);
    printf("\nLCM : %d",(xy)/y);

}


```
File name : 17.c
```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
         printf("Not Prime");
         return 0;
    }
    else{
        for(int i = 2;i<n;i++){
            if(n%i==0){
                 printf("Not prime");
                 return 0;
            }
        }
    }
    printf("Prime");
}


```
File name : 18.c
```c



#include <stdio.h>

int main() {
    long long int n,rev=0,N;
    scanf("%lld",&n);
    N=n;
    while(n!=0){
        int rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    if(N==rev) printf("Yes");
    else printf("No");
}


```
File name : 19.c
```c
#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    double sin_value = 0;
    double upTerm = x;
    long long int fact = 1;
    for(int i=1;i<=50;i+=2){
        sin_value+=(upTerm/fact);
        fact*= (i+1)*(i+2);
        upTerm *= -x*x;
    }
    printf("%lf",sin_value);
}



```
File name : 20.c
```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum =0;
    int temp=0;
    for(int i=1;i<=n;i++){
        temp = temp *10 +i;
        sum+=temp;
    }
    printf("%d",sum);
}


```


# Array
### [Problemset Link](https://github.com/rafidoth/Structured-Programming-Language-Lab/blob/main/Array/05%20Array.docx.pdf) 

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

# Pattern
### [Problemset Link](https://github.com/rafidoth/Structured-Programming-Language-Lab/blob/main/Pattern/06%20Nested%20loop.docx.pdf) 

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

