//3. Reverse the bits of an 8-bit number.
#include<stdio.h>
int main(){
    int n = 9;
    int result= 0;//need to intilize otherwise it wwill take garbaze value
    int lsb;
    int rev;
    for(int i =0;i<8;i++){
        lsb = n&1;
        rev = lsb<<(7)-i;
        result = result | rev;
         n = n >> 1;
    }
    printf("%d\n",result);
    return 0;
}