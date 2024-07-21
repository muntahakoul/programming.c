// program to disply series 2 4 16 256 n terms

  #include <stdio.h>

(int n)
{
	
    int term = 2;  
    
    printf("Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", term);
        term *= 4;  //
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
  printf("Series: ");
    display_series(n);
    
    return 0;
}  
