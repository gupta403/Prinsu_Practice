//18. Determine if a number is even or odd using bit operations.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if((n&1)==1){
        printf("number  is odd  %d\n",  n);
    }
    if((n&1)!=1){
    
        printf("number is even  %d\n",   n);
    }
    
    return 0;
}