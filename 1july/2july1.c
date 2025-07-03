//4. Swap the odd and even bits of an integer.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number to swap the odd and even bit of an integer 8 bit\n");
    scanf("%d",&n);
    int em = 0XAA;
    int om = 0x55;
    int final_em = (n&em);
    int final_om = (n&om);
    int rev = (final_em>>1) | (final_om<<1);
    printf("here is your answer %d\n",rev);
    return 0;

}
