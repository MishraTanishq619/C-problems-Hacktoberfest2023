#include <stdio.h>

int main() {
    int num;

    // Using a while loop
    num = 50;
    printf("Even numbers between 50 and 100 using while loop:\n");
    while (num <= 100) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }

    // Using a do-while loop
    num = 50;
    printf("\nEven numbers between 50 and 100 using do-while loop:\n");
    do {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    } while (num <= 100);

    // Using a for loop
    printf("\nEven numbers between 50 and 100 using for loop:\n");
    for (num = 50; num <= 100; num++) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
    }

    return 0;
}
