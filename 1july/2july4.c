#include<stdio.h>
int main(){
    int n  = 42;
    int i = 1;
    int j = 4;
    //int i_mask = (n>>(i-1));
    int j_mask = ((1<<(j-i+1))-1);
    int final = n | (j_mask << i);
    printf("%d\n",final);
    return 0;
}