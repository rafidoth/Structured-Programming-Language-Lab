



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

