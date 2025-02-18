#include<stdio.h>
void main(){
    int n;
    printf("Enter a number to get add");
    scanf("%d",&n);
    int sum=0;
    for(;n!= 0;n=n/10){
        int x= n%10;
        sum = sum+x;
    }
    printf("%d",sum);
}