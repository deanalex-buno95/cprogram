#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lesson01() {
    /**
     * Lesson 01 — Hello World And Drawing Shapes
     */
    printf("* Lesson 01 *\n");
    printf("Hello World!\n");
    printf("000010000\n");
    printf("000111000\n");
    printf("001111100\n");
    printf("011111110\n");
    printf("111111111\n");
}

void lesson02() {
    /**
     * Lesson 02 — Variables
     */
    printf("* Lesson 02 *\n");
    printf("Hello World!\n");
    /* Declaring variables */
    char characterName[] = "Santos";  // String variable.
    int characterAge = 21;  // Integer variable.
    printf("My name is %s.\n", characterName);  // Use string placeholder "%s".
    printf("I am %d years old.\n", characterAge);  // Use integer placeholder "%d".
    /* Reassign variables */
    characterAge = 15;
    printf("I used to play basketball when I was %d years old.\n", characterAge);  // Use replaced value for integer placeholder.
}

void lesson03() {
    /**
     * Lesson 03 — Data Types
     */
    printf("* Lesson 03 *\n");
    /* Variable data types */
    int age = 21;  // Integer variable.
    double gpa = 6.42;  // Double variable (with decimal).
    float height = 1.69f;  // Float variable (less memory space used than double).
    char grade = 'A';  // Character variable (use single inverted commas, only one character).
    char name[] = "Santos";  // String of characters (use double inverted commas, array of characters, cannot be modified).
    /* Placeholders used */
    printf("%%d is used for integers like age -> %d.\n", age);
    printf("%%lf is used for doubles like GPA -> %lf.\n", gpa);
    printf("%%f is used for floats like height -> %ff.\n", height);
    printf("%%c is used for characters like grade -> \'%c\'.\n", grade);
    printf("%%s is used for strings like name -> \"%s\".\n", name);
}

void lesson04() {
    /**
     * Lesson 04 — Function Printf
     */
    printf("* Lesson 04 *\n");
    printf("Hello ");  // Basic printing.
    printf("World!\n");  // End line.
    printf("\"Juan\"\n");  // Special characters.
    printf("%d%% success rate.\n", 90);  // Format specifier.
    printf("My favorite %s is %f.\n", "number", 95.69420);  // Format specifiers.
    int favorite = 95;
    printf("My favorite number is %d.\n", favorite);  // Utilize variables.
}

void lesson05() {
    /**
     * Lesson 05 — Numbers And Math
     */
    printf("* Lesson 05 *\n");
    /* Simple arithmetic */
    printf("%f\n", 9.5);  // Simple number
    printf("%f\n", 5.0 + 4.5);  // Addition.
    printf("%f\n", 5.0 - 4.5);  // Subtraction.
    printf("%f\n", 5.0 * 4.5);  // Multiplication.
    printf("%f\n", 5.0 / 4.5);  // Division.
    /* Noting different types */
    printf("%f\n", 5 + 4.5);  // Add integer and double returns double.
    printf("%d\n", 7 / 4);  // Divide integer by integer returns integer truncated.
    printf("%f\n", 5 / 4.0);  // Divide integer by double returns double.
    /* Advanced use of Math, including `math.h` */
    int num = 5;
    printf("%d\n", num);  // Use variables.
    printf("%f\n", pow(2, 3));  // x^y.
    printf("%f\n", ceil(5.9));  // Round up to nearest whole number.
    printf("%f\n", floor(5.9));  // Round down to nearest whole number.
}

void lesson25() {
    /**
     * Lesson 25 — Writing Files
     */
    printf("* Lesson 25 *\n");
    /* "w" permission */
    // Write new file.
    FILE * fPointer = fopen("../rggCharacters.txt", "w");  // Path not specified → File written in the same directory as the C build file.
    // Add text to file.
    fprintf(fPointer, "Kiryu,Red\nYagami,Blue\n");  // Note that another `fprintf`, or filling the string with something else, will overwrite the file.
    printf("Kiryu and Yagami written into %s\n", "rggCharacters.txt");
    // Close file.
    fclose(fPointer);
    /* "a" permission */
    // Get file again, but with a different pointer and permission ("w" to "a").
    FILE * anotherFPointer = fopen("../rggCharacters.txt", "a");  // Most file types (.html, .css, etc.) can be modified.
    // Add more text to the file.
    fprintf(anotherFPointer, "Goda,Yellow\nSaejima,Green\n");
    printf("Goda and Saejima appended into %s\n", "rggCharacters.txt");
    // Close file again.
    fclose(anotherFPointer);
}


void lesson26() {
    /**
     * Lesson 26 — Reading Files
     */
    printf("* Lesson 26 *\n");
    /* "r" permission */
    // Read file.
    FILE * fPointer = fopen("../rggCharacters.txt", "r");  // "r" for read.
    // Declare the buffer.
    char buffer[255];
    // Get the text from the file, line by line, in a loop till the buffer, given that it is a valid text file.
    if (fPointer == NULL) {
        printf("Error: could not open file\n");  // Invalid file.
    }
    else {
        while (fgets(buffer, 255, fPointer)) {
            printf("%s", buffer);  // One line of text.
        }
    }
    // Close the file.
    fclose(fPointer);
}


int main() {
    /**
     * All lessons
     */
    printf("------------------------------------------------------------------------------------------------\n");
    lesson01();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson02();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson03();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson04();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson05();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson25();  // Writing files
    printf("------------------------------------------------------------------------------------------------\n");
    lesson26();  // Reading files
    printf("------------------------------------------------------------------------------------------------\n");
    return 0;
}
