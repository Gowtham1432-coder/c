#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;
    int i;

    printf("Enter marks for 5 subjects (out of 100):\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    printf("Total marks = %d / 500\n", total);
    printf("Average marks = %.2f / 100\n", average);

    if (average >= 75) {
        printf("Result: Distinction\n");
    } else if (average >= 60) {
        printf("Result: First Class\n");
    } else if (average >= 50) {
        printf("Result: Second Class\n");
    } else if (average >= 40) {
        printf("Result: Third Class\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
