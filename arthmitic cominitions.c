int main() {
    float a, b;
    char op;

    printf("Enter expression: ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+')
        printf("Result = %.2f\n", a + b);
    else if (op == '-')
        printf("Result = %.2f\n", a - b);
    else if (op == '*')
        printf("Result = %.2f\n", a * b);
    else if (op == '/')
        printf("Result = %.2f\n", a / b);
    else
        printf("Invalid operator.\n");

    return 0;
}
