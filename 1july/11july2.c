#include<stdio.h>
int main(){
    int n = 14;
    int p =1;
    while((n&1)==0){
        n>>=1;
        p++;

    }
    printf(" rightmost set bit positon %d\n",p);
    return 0;
}