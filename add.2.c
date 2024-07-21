//program to add three number in c
#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the sum
    sum = num1 + num2 + num3;

    // Display the result
    printf("Sum of three numbers is %d\n", sum);

    return 0;
}
