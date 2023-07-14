#include <stdio.h>
#include <stdlib.h>


int main() {
    /* Variables */
    int age = 21;
    double gpa = 6.42;
    char grade = 'A';

    /* Physical memory addresses (%p means pointer) */
    printf("Age address: %p\n", &age);
    printf("GPA address: %p\n", &gpa);
    printf("Grade address: %p\n", &grade);

    return 0;
}
