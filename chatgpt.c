#include <stdio.h>

int main() {
    int sum, a, b, sub, multi, divi, mod;
    
    printf("Enter number a \n");
    scanf("%d", &a);
    
    printf("Enter number b \n");
    scanf("%d", &b);
    
    sum = a + b;
    printf("Sum of a (%d) and b (%d) is %d \n", a, b, sum);
    
    sub = a - b;
    printf("Sub of a (%d) and b (%d) is %d \n", a, b, sub);
    
    multi = a * b;
    printf("Multi of a (%d) and b (%d) is %d \n", a, b, multi);
    
    // Check for division by zero
    if (b != 0) {
        divi = a / b;
        printf("Div of a (%d) and b (%d) is %d \n", a, b, divi);
        
        mod = a % b;
        printf("Mod of a (%d) and b (%d) is %d \n", a, b, mod);
    } else {
        printf("Cannot perform division or modulus by zero! \n");
    }

    return 0;
}
