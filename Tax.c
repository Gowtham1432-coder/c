#include <stdio.h>

int main() {
    float salary, tax = 0;

    printf("Enter your annual salary: ");
    scanf("%f", &salary);

    if (salary <= 150000) {
        tax = 0;
    } else if (salary <= 300000) {
        tax = (salary - 150000) * 0.10;
    } else if (salary <= 500000) {
        tax = (150000 * 0.10) + (salary - 300000) * 0.20;
    } else {
        tax = (150000 * 0.10) + (200000 * 0.20) + (salary - 500000) * 0.30;
    }

    printf("Total Tax Payable = %.2f\n", tax);

    return 0;
}
