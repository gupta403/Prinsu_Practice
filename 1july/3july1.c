#include<stdio.h>
int main(){
    int n  = 42;
    int i =1;
    int j =4;
    int value = 5;
    int mask =~(((1 << (j - i + 1)) - 1) << i);//
    
    printf("%d\n",mask);
    int remove = n&mask;
    printf("%d\n",remove);
    int mask_value = (value & ((1 << (j - i + 1)) - 1)) << i;
    printf("%d\n",mask_value);
    int final_value = remove | mask_value;
    printf("%d\n",final_value);
    return 0;
}