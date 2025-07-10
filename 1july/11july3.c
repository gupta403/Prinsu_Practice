#include<stdio.h>
int main(){
    int n = 14;
    int p =0;
    while(n>0){
        p++;
        n>>=1;
    }
    printf(" the leftmost bit positon is %d\n",p);
    return 0;
}