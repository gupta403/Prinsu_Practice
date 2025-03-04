#include <stdio.h>
// Count  even digit b/w 1 to 7
int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        //if((n%10)>3 && (n%10)<8 )
        //sum += n % 10;
        int x = n%10;
        if((x%2==0)&& x>=1 && x<7 ){
            sum++;
        }
        n /= 10;


    }
    return sum;
}

int sumforloop(int n){
  int sum = 0;
  for(;n!=0;n= n/10){
  //  if((n%10)>3 && (n%10)<8 )
    //sum = sum +n%10;
    int y = n%10;
    if((y%2==0) && y >=1 && y <7){
        sum++;
    }

  }
  return sum;
}

int main()
{
    int num1,num2;
    printf("Enter the num 1 \n ");
    scanf("%d",&num1);
    printf("Enter the num 2 \n ");
    scanf("%d",&num2);
    printf("Count  even digit b/w 1 to 7 %d: %d\n", num1, sumOfDigits(num1));
    printf("Count  even digit b/w 1 to 7 %d: %d\n", num2, sumOfDigits(num2));
    printf("Count  even digit b/w 1 to 7 for loop %d: %d\n", num1, sumforloop(num1));
    printf("Count  even digit b/w 1 to 7 for loop %d: %d\n", num2, sumforloop(num2));
    return 0;
}
