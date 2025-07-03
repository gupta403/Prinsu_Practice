//16. Multiply a number by 2^n using left shift.
#include<stdio.h>
int main(){
    int n;
    printf("enter a numer");
    scanf("%d",&n);
    int p;
    printf("enter the power");
    scanf("%d",&p);
    
    //int final;
    int final = n<<p;
    printf("%d",final);

}