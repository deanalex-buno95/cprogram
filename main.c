#include <stdio.h>
#include <stdlib.h>

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


int main() {
    /**
     * All lessons
     */
    printf("------------------------------------------------------------------------------------------------\n");
    lesson25();  // Writing files
    printf("------------------------------------------------------------------------------------------------\n");
    return 0;
}
