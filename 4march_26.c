#include <stdio.h>
#include<math.h>

//  Print 1st odd   digit
int sumOfDigits(int n)
{
    int s = 0;
    while (n >= 10)
    {
        //if((n%10)>3 && (n%10)<8 )
        //sum += n % 10;


        n = n/10;
    }
    if(n%2!=0){
    return n;
  }
}

int sumforloop(int n){
  int sum = 0;
  for(;n>=10;n= n/10){
  //  if((n%10)>3 && (n%10)<8 )
    //sum = sum +n%10;

  }
  return n;
}

int main()
{
    int num1,num2;
    printf("Enter the num 1 \n ");
    scanf("%d",&num1);
    printf("Enter the num 2 \n ");
    scanf("%d",&num2);
    printf(" Print 1st   digit  %d: %d\n", num1, sumOfDigits(num1));
    printf(" Print 1st   digit  %d: %d\n", num2, sumOfDigits(num2));
    printf(" Print 1st   digit  for loop %d: %d\n", num1, sumforloop(num1));
    printf(" Print 1st   digit  for loop %d: %d\n", num2, sumforloop(num2));
    return 0;
}
