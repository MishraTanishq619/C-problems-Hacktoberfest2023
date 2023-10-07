#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } 
    else {
        // Calculate the sum of first n natural numbers
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }
        
        // Display the sum
        printf("\nSum of first %d natural numbers = %d\n", n, sum);
    }

    return 0;
}
