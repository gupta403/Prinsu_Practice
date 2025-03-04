#include <stdio.h>
//   Reverse  last 2 digit
int sumOfDigits(int n)
{
    int rev = 0;
    n = n%100;
    while (n!=0)
    {
        //if((n%10)>3 && (n%10)<8 )
        //sum += n % 10;
        int x = n%10;
        rev = rev*10+x;


        n /= 10;
        //printf("%d",n);

    }
    return rev;
}

int sumforloop(int n){
  int sum = 0;
  n = n%100;
  for(;n!=0;n= n/10){
  //  if((n%10)>3 && (n%10)<8 )
    //sum = sum +n%10;
    int f = n%10;
    sum = sum*10 + f;


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
    printf(" Reverse  last 2 digit in num  %d: %d\n", num1, sumOfDigits(num1));
    printf(" Reverse  last 2 digit in num  %d: %d\n", num2, sumOfDigits(num2));
    printf(" Reverse  last 2 digit in num  for loop %d: %d\n", num1, sumforloop(num1));
    printf(" Reverse  last 2 digit in num  for loop %d: %d\n", num2, sumforloop(num2));
    return 0;
}
