# Structured-Programming-Language-Lab
 
Solution of problemset provided in SPL Lab (CSE 1112)

_**Disclaimer:** All the solutions provided in this repo are given by me. They are not guaranteed to be 100% correct or highly efficient. Please use them as a starting point and do your own testing and debugging. You can also take help from other sources to make your code more efficient._

Table of Contents
- [Loop Related Problems](#loop)
- [Array Related Problems](#array)
- [Pattern Problems](#pattern)
- [Matrix Problems](#matrix)



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

WAP that will take n integer numbers into an array, and then print all the integers into reverse order (from the last valid index to index 0).
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

WAP that will take n integer numbers into an array, and then sum up all the integers in that array.
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

WAP that will take n integer numbers into an array, and then sum up all the even integers in that array.
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

WAP  that will take n floating point numbers into an array, and then find the average of those numbers.
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

WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.
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

Wap that will take n integer numbers in an array, n different integer numbers in a second array and put the sum of the same indexed numbers from the two arrays in a third array.
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

WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.
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

WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.
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

WAP that will take n alphabets into an array, and then count number of vowels in that array.
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

WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.

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

WAP that will take n integers into an array A, and then copy all numbers in reverse order from array A to another array B. Finally show all elements of both array A and B.
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

WAP that will take n integer numbers as input in an array and then insert a number in a position specified by the user in the array.
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

WAP that will take n integer numbers as input in an array and then delete a number from a position specified by the user in the array.
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

WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array A and B. Finally show all elements of both array A and B.
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

WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
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

WAP that will take n positive integers into an array A. Now find all the integers that have an odd index and replace them by 0 in array A. Finally show all elements of array A.
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

WAP that will take n integers into an array A. Now sort them in ascending order within that array. Finally show all elements of array A. (Bubble Sort)
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

WAP that will take n integers into an array A. Now remove all duplicates numbers from that array. Finally print all elements from that array. 
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

WAP that will take n integers into array A and m positive integers into array B. Now find the intersection (set operation) of array A and B.
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

WAP that will take n integers into an array A and m positive integers into array B. Now find the union (set operation) of array A and B.
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
```
1234
1234
1234
1234
```

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
```
1234
2345
3456
4567
```

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
```
1
23
345
4567
```

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
```
____1 
___22 
__333 
_4444 
55555
```

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
```
4
43
432
4321
```

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
```
1
12
123
1234
```

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
```
****
****
****
****
```

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
```
*****
****
***
**
*
```

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
```
10101
01010
10101
01010
10101
```

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
```
____*
___**
__***
_****
*****
```

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
```
____*
___***
__*****
_*******
*********
```

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
```
____*
___***
__*****
_*******
*********
_*******
__*****
___***
____*
```

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
```
1_____1
12___21
123_321
1234321
```

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
```
*****
*___*
*****
*___*
*****
```

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
```
ZZZZZZZ
     Z 
    Z  
   Z   
  Z    
 Z     
ZZZZZZZ
```

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
```
*_____*
_*___*_
__*_*__
___*___
__*_*__
_*___*_
*_____*
```


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
```
______$______
_____$$$_____
____$_$_$____
___$__$__$___
__$___$___$__
_$____$____$_
$$$$$$$$$$$$$
_$____$____$_
__$___$___$__
___$__$__$___
____$_$_$____
_____$$$_____
______$______
```


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
```
H           H
H           H
H           H
H H H H H H H
H           H
H           H
H           H
```
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

### Additional Pattern Questions
19.
```
                  2
               4  6  4
           6  8  10  8  6
      8  10  12  14  12  10  8
 10  12  14  16  18  16  14  12  10

```
```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=0;
    for(int i=1;i<=n;i++){
        int term = 2*i;
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i|| j>n+k){
                printf("   ");
            }else{
                printf(" %d ",term);
                if(j<n) term+=2;
                else term -=2;
            }
        }
        printf("\n");
        k++;
    }
}
```


# Matrix
1. WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix view.
```c
#include<stdio.h>

int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
```

2. WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise and column-wise.

```
2 3
1 2 3
6 5 4
-------------------------------
Row-wise: 1 2 3 6 5 4
Column-wise: 1 6 2 5 3 4

```

```c
#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Row-wise: ");
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
    }

    printf("\nCol-wise: ");
    for(int j =0;j<n;j++){
        for(int i =0;i<m;i++){
            printf("%d ",arr[i][j]);
        }
    }

}
```

3. WAP that will take input n by n matrix and print transpose the matrix
```
3
1 2 3 
4 5 6 
7 8 9
--------------------------
1 4 7
2 5 8
3 6 9
```
```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //row=i, col=j
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

```

4. WAP that will take inputs of a n by n matrix into a 2D array. Now find the determinant of this matrix. (Gauss Elimination) **
```
1 2 3
4 5 6
7 8 9
-----------------------
0
```
```c
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

//    for(int i =0;i<n;i++){
//        for(int j =0;j<n;j++){
//            printf("%f ",arr[i][j]);
//        }
//        printf("\n");
//    }

    float det = 1;
    for(int i=0;i<n;i++){
        det*=arr[i][i];
    }

    printf("%d",(int)ceil(det));
}

```


5. WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of this matrix.

```
1 2 3
4 5 6
7 8 9
-----------------------
0
```

```c
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

    int det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("%d",det);
}






```


6. WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the elements of its two diagonals.
```
5
1 2 3 4 5
5 4 3 2 1
2 2 2 2 2
6 7 8 9 0
1 9 3 7 4
-------------------------------
Major diagonal: 1 4 2 9 4
Minor diagonal: 5 2 2 7 1
```

```c
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i][i]);
    }
    printf("\nMinor Diagonal: ");
    int j =n-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][j]);
        j--;
    }

}
```

7. WAP that will take the size of an identity matrix from the user and generate the identity matrix into a 2D array. 

```
5
-------------------
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1

```

```c
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j) arr[i][j] = 1;
            else arr[i][j] = 0;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
```

8. WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B. Now do C = A + B. Finally display all the elements from matrix / 2D array C.

```
2 3
1 2 3
2 3 4
1 1 1
2 2 2
-----------------
2 3 4
4 5 6
```

```c
#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n],B[m][n],C[m][n];

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
```

9. WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.
```
1 2 3
4 5 6
7 8 9
2 2 2
2 2 2
1 1 1
-------------------
9 9 9
24 24 24
39 39 39
```

```c

#include<stdio.h>
#include<math.h>

int main(){
    int n=3;

    int A[n][n],B[n][n],C[n][n];

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            C[i][j] = 0;
            for(int k=0;k<n;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
```

10. WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum element with index locationfrom that matrix. 
```
3 3
1 2 3
4 5 6
2 9 2
-----------
Max: 9
Location: [2][1]
```

```c
#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n];
    int max = A[0][0];
    int loc_i = 0;
    int loc_j = 0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j]>max){
                max = A[i][j];
                loc_i = i;
                loc_j = j;
            }

        }
    }

    printf("Max: %d",max);
    printf("\nLocation: [%d][%d]",loc_i,loc_j);

}
```


11. WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers at first row, last row and two diagonals without overlap.
```
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
------------------
52
```
```c
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
```

12. WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers based on following position pattern (consider only the boxed position during the sum). Please see the input-output.

```
2 6
1 2 3 4 5 6
9 8 7 6 5 4
---------------
6 5 4 3 2 1
4 5 6 7 8 9
```

```c
#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            int temp = A[i][j];
            A[i][j] = A[i][n-j-1];
            A[i][n-j-1] = temp;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
```

13. WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now determine whether the matrix is symmetric or not.

```
3
1  7  3
7  4  5
3  5  6
--------------
YES
```

```c
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n], T[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            T[i][j] = arr[j][i];
        }
    }
    int flag = 1;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(T[i][j] != arr[i][j]){
                flag= 0;
            }
        }
    }

    (flag)? printf("YES"): printf("NO");
}
```

14. WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.


```
3  3
1  7  3
7  4  5
3  5  6
------------
1  7  3
-1  4  5
-1 -1  6
```
```c
#include<stdio.h>
#define MAX 1000
int freq[MAX];

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            if(freq[arr[i][j]]==0){
                freq[arr[i][j]]++;
            }else{
                arr[i][j] = -1;
            }
        }
    }

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
```
15. WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now just simply add all the integers in that matrix and show the result.

```
3  3
1  7  3
7  4  5
3  5  6
---------------
41
```

```c
#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    int sum =0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            sum+= arr[i][j];
        }
    }
    printf("%d",sum);
}
```