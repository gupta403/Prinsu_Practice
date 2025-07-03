//Count the number of set bits (1s) in an integer.
#include<stdio.h>
int main(){//we have to use int function for that
    int n = 9,count=0;
    while(n){//loop will run untill it will become 0
        count+= n&1;//count will increase by 1 when the 1's will found 
        n>>=1;//right shift with 1 bit 

    }
    printf("%d\n",count);
    return 0;
}