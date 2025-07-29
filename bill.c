#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 150) {
        bill = units * 3.0;
    } else if (units <= 350) {
        bill = 100 + (units - 150) * 3.75;
    } else if (units <= 450) {
        bill = 200 + (units - 350) * 4.0;
    } else if (units <= 600) {
        bill = 300 + (units - 450) * 4.25;
    } else {
        bill = 400 + (units - 600) * 5.0;
    }

    printf("Electricity bill = Rs. %.2f\n", bill);

    return 0;
}
