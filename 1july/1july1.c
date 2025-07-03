//1. Check if a number is a power of two.

#include<stdio.h>
void main(){
    int num;
printf("Enter a number to check \n");
scanf("%d",&num);
if((num&1) !=1){
    printf("number is power of two %d ",num);
}
else{
    printf("this is not a power of two number");
}
}