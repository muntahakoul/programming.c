// to  display whether a number is prime or not

#include <stdio.h>

int isPrime(int num) {
    int i;
    
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    
    return 1; // Prime number
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
    return 0;
}
