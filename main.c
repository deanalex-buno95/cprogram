#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char grade;  // Declare a variable
    printf("Enter your grade: ");  // Prompt input of GPA
    scanf("%c", &grade);  // Get input of GPA (use ampersand to get input)
    printf("Your grade is %c.\n", grade);  // Display input
    int age;  // Declare another variable
    printf("Enter your age: ");  // Prompt input of age
    scanf("%d", &age);  // Get input of age (use ampersand to get input)
    printf("You are %d years old.\n", age);  // Display input
    double gpa;  // Declare one more variable
    printf("Enter your GPA: ");  // Prompt input of GPA
    scanf("%lf", &gpa);  // Get input of GPA (use ampersand to get input)
    printf("Your GPA is %f.\n", gpa);  // Display input
    return 0;
}
