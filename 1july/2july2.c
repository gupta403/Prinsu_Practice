//Extract ‘k’ bits from a given position in a number 
#include<stdio.h>
int main(){
    int n = 138;
    int i = 2;
    int j = 5;
    int i_value= (n>>(i-1));
    int k_value = ((1<<j)-1);
    int final_value = (i_value&k_value);
    printf("%d\n",final_value);
    return 0;

}