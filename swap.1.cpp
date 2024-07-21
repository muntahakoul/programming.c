//program to swap two numbers
#include <stdio.h>
int main() {
    double first, second, temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);
    
    // Swap using a temporary variable
    temp = first;
    first = second;
    second = temp;
    
    printf("\nAfter swapping, first number = %.2lf\n", first);
    printf("After swapping, second number = %.2lf", second);
    return 0;
}
