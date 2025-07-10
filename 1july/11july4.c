#include<stdio.h>
//14. Convert a binary number to its Gray code equivalent.
int main(){
    int n =23;
    int j = (n^(n>>1));
    printf("%d\n",j);
    return 0;
}