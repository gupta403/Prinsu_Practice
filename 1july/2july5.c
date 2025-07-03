//7. Clear (reset) bits from position i to j.
#include<stdio.h>
int main(){
    int n = 42;
    int i = 1;
    int j = 4;
    int i_mask = ~(((1<<(j-i+1))-1)<<i);
    int final = n & i_mask;
    printf("%d\n",final);
    return 0;

}