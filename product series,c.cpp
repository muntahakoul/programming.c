// display the product of series in loops  1 2 3 4 - - n


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

