#include <stdio.h>

int main() {
    printf("Hello ");  // Basic printing
    printf("World\n");  // End line
    printf("\"Juan\"\n");  // Special characters
    printf("%d%% success rate.\n", 90);  // Format specifier
    printf("My favorite %s is %f.\n", "number", 95.69420);  // Format specifiers
    int number = 95;
    printf("My favorite number is %d.\n", number);  // Utilize variables
    char letter = 'B';
    printf("My favorite letter is %c.\n", letter);
    return 0;
}
