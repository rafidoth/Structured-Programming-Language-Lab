
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
