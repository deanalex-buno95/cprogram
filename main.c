#include <stdio.h>
#include <stdlib.h>


double cube(double num);  // Prototype

int main() {
    /* Note that the function called must be above the main, unless you prototype the function */
    printf("Answer: %f", cube(5.0));
    return 0;
}

double cube(double num) {
    return num * num * num;
}