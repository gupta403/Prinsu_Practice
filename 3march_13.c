#include <stdio.h>
//   Sum of  last 3 odd digit
int sumOfDigits(int n)
{
    int sum = 0;
    n  = n%1000;
    while (n != 0)
    {
        //if((n%10)>3 && (n%10)<8 )
        //sum += n % 10;
        int x = n%10;
        if(x%2!=0){
          sum= sum+x;
        }

        n /= 10;


    }
    return sum;
}

int sumforloop(int n){
  int sum = 0;
  n  = n%1000;
  for(;n!=0;n= n/10){
  //  if((n%10)>3 && (n%10)<8 )
    //sum = sum +n%10;
    int y = n%10;
    if(y%2!=0){
      sum = sum+y;
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
    printf("Sum of  last 3 odd digit %d: %d\n", num1, sumOfDigits(num1));
    printf("Sum of  last 3 digit %d: %d\n", num2, sumOfDigits(num2));
    printf("Sum of  last 3 odd digit for loop %d: %d\n", num1, sumforloop(num1));
    printf("Sum of  last 3 odd digit for loop %d: %d\n", num2, sumforloop(num2));
    return 0;
}
