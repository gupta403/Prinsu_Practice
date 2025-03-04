#include <stdio.h>

int sumOfDigits(int n)// while loop
{
    int sum = 0;
    while (n != 0)// to add the number
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumforloop(int n){// for loop
  int sum = 0;
  for(;n!=0;n= n/10){
    sum = sum +n%10;
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
    printf("Sum of digits of %d: %d\n", num1, sumOfDigits(num1));
    printf("Sum of digits of %d: %d\n", num2, sumOfDigits(num2));
    printf("Sum of digits for loop %d: %d\n", num1, sumforloop(num1));
    printf("Sum of digits for loop %d: %d\n", num2, sumforloop(num2));
    return 0;
}
