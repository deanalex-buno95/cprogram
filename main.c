#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char name[45];  // Create a string of up to 45 characters
    printf("Enter your name: ");
//    scanf("%s", name);  Original way of getting strings (problem with lines of strings with spaces)
    fgets(name, 45, stdin);  // Get a string of characters with spaces (`stdin` is the console used for C, disadvantage is the unavoidable newline).
    printf("Your name is %s.\n", name);
    return 0;
}
