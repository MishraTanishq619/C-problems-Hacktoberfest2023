#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Ask the user for input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100.0;

    // Display the calculated simple interest
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
