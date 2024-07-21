// program to disply series 2 4 8 16 32 64
#include <stdio.h>

(int n)
{
	
    int term = 2;  
    
    printf("Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", term);
        term *= 4;  // Multiply the current term by 4 to get the next term
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    displaySeries(n);
    
    return 0;
}
