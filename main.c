#include <stdio.h>
#include <stdlib.h>

void lesson01() {
    /**
     * Lesson 01 — Hello World
     */
    printf("* Lesson 01 *\n");
    printf("Hello World!\n");
}

void lesson02() {
    /**
     * Lesson 02 — Hello World
     */
    printf("* Lesson 02 *\n");
    printf("000010000\n");
    printf("000111000\n");
    printf("001111100\n");
    printf("011111110\n");
    printf("111111111\n");
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
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");
    lesson25();  // Writing files
    printf("------------------------------------------------------------------------------------------------\n");
    lesson26();  // Reading files
    printf("------------------------------------------------------------------------------------------------\n");
    return 0;
}
