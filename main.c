#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("%f\n", 9.5);  // Simple number
    printf("%f\n", 5.0 + 4.5);  // Addition
    printf("%f\n", 5.0 - 4.5);  // Subtraction
    printf("%f\n", 5.0 * 4.5);  // Multiplication
    printf("%f\n", 5.0 / 4.5);  // Division
    printf("%f\n", 5 + 4.5);  // Add integer and float returns float
    printf("%d\n", 7 / 4);  // Divide integer by integer returns integer truncated
    printf("%f\n", 5 / 4.0);  // Divide integer by float returns float
    int num = 5;
    printf("%d\n", num);  // Use variables
    printf("%f\n", pow(2, 3));  // x^y
    printf("%f\n", ceil(5.9));  // Round up to nearest whole number
    printf("%f\n", floor(5.9));  // Round down to nearest whole number
    return 0;
}
