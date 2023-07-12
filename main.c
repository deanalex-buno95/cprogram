#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* Standard array */
    int luckyNumbers[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", luckyNumbers[0]);  // Print integer at index 0
    luckyNumbers[1] = 10;  // Modify integer at index 1.
    printf("%d\n", luckyNumbers[1]);  // Print integer at index 1 after mutation.
    /* Declared array with known length */
    int unluckyNumbers[10];
    unluckyNumbers[2] = 100;  // Add integer at index 2.
    printf("%d\n", unluckyNumbers[2]);  // Print integer at index 2
    printf("%d\n", unluckyNumbers[3]);  // Print integer at index 3
    /* Strings (array of characters) */
    char word[45] = "Array";
    return 0;
}
