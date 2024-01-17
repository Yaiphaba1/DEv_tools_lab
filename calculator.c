#include <stdio.h>

// Function declarations
float add(float num1, float num2);
float subtract(float num1, float num2);


int main() {
    char operator;
    float num1, num2, result;

    // Input from the user

    printf("Enter operator (+, -, *, /): ");

    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;

        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = divide(num1, num2);
            } else {
                printf("Error: Division by zero\n");
                return 1;  // Exit with an error code
            }
            break;

        default:
            printf("Error: Invalid operator\n");
            return 1;  // Exit with an error code
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;  // Exit successfully
}

// Function definitions

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}


