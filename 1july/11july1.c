#include<stdio.h>
int main(){
   int  n = 14;
   int j = n&(-n);
   printf("the right most set bit %d\n",j);
    return 0;


}