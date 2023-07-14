#include <stdio.h>
#include <stdlib.h>


int main() {
    /* Variables */
    int age = 21;
    double gpa = 6.42;
    char grade = 'A';

    /* Pointer variables */
    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;

    /* Physical memory addresses in RAM (%p means pointer) */
    printf("Age address: %p\n", pAge);
    printf("GPA address: %p\n", pGpa);
    printf("Grade address: %p\n", pGrade);

    return 0;
}
