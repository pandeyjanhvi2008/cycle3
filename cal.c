#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // 1. Get the math operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // 2. Get the two numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // 3. Process the calculation using switch-case
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Safety check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        // Matches if the user typed an invalid character
        default:
            printf("Error: '%c' is not a valid operator.\n", operator);
    }

    return 0;
}
