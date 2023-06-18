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
