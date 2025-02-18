#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num1 = 123;
    int num2 = 246;

    printf("Sum of digits of %d: %d\n", num1, sumOfDigits(num1));
    printf("Sum of digits of %d: %d\n", num2, sumOfDigits(num2));

    return 0;
}
