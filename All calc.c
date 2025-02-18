#include<stdio.h>
int main(){
    int sum,a,b,sub,multi,divi,mod;
    int choose;
    printf("Enter number a \n",a);
    scanf("%d",&a);
    printf("Enter number b \n",   b);
    scanf("%d", &b);
    sum = a+b;
    printf("Sum of the a (%d) and b (%d) is sum %d \n", a,b,sum);
    sub = a - b;
    printf("Sub  of a and b is sub %d \n", sub);
    multi = a*b;
    printf("Multi of a and b is multi %d \n",multi);
    divi = a/b;
    printf("divi of a and b is divi %d\n",divi);
    mod =a%b;
    printf("mod of a and b  is mod %d\n",mod);

}