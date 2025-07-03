//8. Toggle bits in a specified range using XOR.
#include<stdio.h>
int main(){
    int n = 42;
    int i =1;
    int j = 4;
   // int mask = ((1<<(j-i+1))-1)<<i;
    int mask = ((1 << (j - i + 1)) - 1) << i;
    
    int final = n ^ mask;
    printf("%d\n",final);
    return 0;
} 