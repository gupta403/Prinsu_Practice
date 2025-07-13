//19. Check if exactly k bits are set in a number.
#include<stdio.h>
int exactlybitz(int n , int k){
    //int n = 23;
    //int k =4;
    int count  = 0;
    while(n){
        if(n&1)
        count++;
        n>>=1;
    }
    printf("what count we found %d\n",count);
    if(count == k){
        printf("yes! you are right\n");
    }
    else{
        printf("you are wrong\n");
    }
    return 0;
}
int main(){
    int n,k;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter exact bit number to check \n");
    scanf("%d",&k);
    exactlybitz(n,k);

}
