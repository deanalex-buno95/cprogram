#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

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

void lesson06() {
    /**
     * Lesson 06 — Comments
     */
    printf("* Lesson 06 *\n");
    printf("// ... used for inline comments.\n");
    printf("/* ... */ used for block comments.\n");
    printf("Both used for explaining code in a sparing use.\n");
}

void lesson07() {
    /**
     * Lesson 07 — Constants
     */
    printf("* Lesson 07 *\n");
    /* Use of standard variables. */
    int num = 5;
    printf("%d\n", num);  // Standard procedure
    num = 8;
    printf("%d\n", num);  // With modified variable
    /* Use of constant variables. */
    const int FAV_NUM = 95;
    printf("%d\n", FAV_NUM);  // With variable that cannot be modified (throws error before build creation, use UPPERCASE_WITH_UNDERSCORES for best practices)
    printf("95\n");  // Special constant 1 (direct string input, piece of data unchanged)
    printf("%d\n", 95);  // Special constant 2 (direct integer input, piece of data unchanged)
}

void lesson08() {
    /**
     * Lesson 08 — User Inputs
     */
    printf("* Lesson 08 *\n");
    /* Function `scanf` */
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
    /* Function `fgets` */
    char name[45];  // Create a string of up to 45 characters
    printf("Enter your name: ");
//    scanf("%s", name);  Original way of getting strings (problem with lines of strings with spaces)
    fgets(name, 45, stdin);  // Get a string of characters with spaces (`stdin` is the console used for C, disadvantage is the unavoidable newline).
    printf("Your name is %s.\n", name);
}

void lesson11() {
    /**
     * Lesson 11 — Arrays
     */
    printf("* Lesson 11 *\n");
    /* Standard array */
    int luckyNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
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
    printf("%c\n", word[0]);  // Print 'A'
}

void f_sayHelloWorld() {
    printf("Hello World!\n");
}

void f_sayHelloPerson(char name[]) {
    printf("Hello %s!\n", name);
}

void f_describePerson(char name[], int age) {
    printf("Your name is %s, and you are %d year(s) old!\n", name, age);
}

void lesson12() {
    /**
     * Lesson 12 — Functions
     */
    printf("* Lesson 12 *\n");
    /* Note that the function called must be above the main */
    f_sayHelloWorld();
    f_sayHelloPerson("Alexi");
    f_sayHelloPerson("Bryce");
    f_describePerson("Charles", 25);
    f_describePerson("Donovan", 30);
}

double f_cube(double num);  // Prototype

void lesson13() {
    /**
     * Lesson 13 — Return Statement
     */
    printf("* Lesson 13 *\n");
    /* Note that the function called must be above the main, unless you prototype the function */
    printf("Answer: %f\n", f_cube(5.0));
}

double f_cube(double num) {
    return num * num * num;
}

bool f_isLeapYear(int year) {
    /* Use if-elseif-else conditions and && */
    if (year % 100 == 0 && year % 400 == 0) {
        // Leap year condition 1
        return true;
    }
    else if (year % 100 != 0 && year % 4 == 0) {
        // Leap year condition 2
        return true;
    }
    else {
        // Common year condition
        return false;
    }
}

bool f_isRightHeight(double height) {
    /* Use if-else conditions and || */
    if (height < 160.0 || height > 231.0) {
        return false;
    }
    else {
        return true;
    }
}

void lesson14() {
    /**
     * Lesson 14 — If Statement
     */
    printf("* Lesson 14 *\n");
    /* Variables for year */
    int year1 = 2000;
    int year2 = 1984;
    int year3 = 1800;
    int year4 = 1765;
    int years[] = {year1, year2, year3, year4};
    /* Use if-else conditions for year */
    for (int i = 0; i < sizeof(years)/sizeof(years[0]); ++i) {
        if (f_isLeapYear(years[i])) {
            printf("%d is a leap year.\n", years[i]);
        }
        else {
            printf("%d is a common year.\n", years[i]);
        }
    }
    /* Variables for height */
    double height1 = 159.0;
    double height2 = 232.0;
    double height3 = 206.0;
    double heights[] = {height1, height2, height3};
    /* Use if-else conditions for height */
    for (int i = 0; i < sizeof(heights)/sizeof(heights[0]); ++i) {
        if (f_isRightHeight(heights[i])) {
            printf("%.2lf meters is just right.\n", heights[i]);
        }
        else {
            printf("%.2lf meters is either too short or too tall.\n", heights[i]);
        }
    }
}

char* f_getTeamColor(int teamNumber) {
    switch(teamNumber) {
        case 1:
            return "RED";
        case 2:
            return "BLUE";
        case 3:
            return "YELLOW";
        case 4:
            return "GREEN";
        case 5:
            return "ORANGE";
        case 6:
            return "CYAN";
        case 7:
            return "PURPLE";
        case 8:
            return "WHITE";
        default:
            return "N/A";
    }
}

void lesson16() {
    /**
     * Lesson 16 — Switch Statement
     */
    printf("* Lesson 16 *\n");
    int teamNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < sizeof(teamNumbers)/sizeof(teamNumbers[0]); ++i) {
        printf("Team %d color: %s\n", teamNumbers[i], f_getTeamColor(teamNumbers[i]));
    }
}

void lesson17() {
    /**
     * Lesson 17 — Structs
     */
    printf("* Lesson 17 *\n");
    struct Student {
        /* Attributes */
        char name[45];
        char major[45];
        int birthYear;
        double gpa;
    };

    /* Create a struct of `Student` */
    struct Student student1;
    student1.birthYear = 2002;
    student1.gpa = 6.42;
    strcpy(student1.name, "Santos");
    strcpy(student1.major, "BIT");

    /* Create another struct of `Student` */
    struct Student student2;
    student2.birthYear = 2006;
    student2.gpa = 5.25;
    strcpy(student2.name, "Alexandra");
    strcpy(student2.major, "Nursing");

    /* Print output */
    printf("_Student 1_\n");
    printf("Age: %d\n", 2023 - student1.birthYear);
    printf("GPA: %lf\n", student1.gpa);
    printf("Name: %s\n", student1.name);
    printf("Major: %s\n", student1.major);
    printf("_Student 2_\n");
    printf("Age: %d\n", 2023 - student2.birthYear);
    printf("GPA: %lf\n", student2.gpa);
    printf("Name: %s\n", student2.name);
    printf("Major: %s\n", student2.major);
}

void lesson18() {
    /**
     * Lesson 18 — While Loops
     */
    printf("* Lesson 18 *\n");
    int value;
    printf("Write a value: ");
    scanf("%d", &value);
    int numberOfSteps = 0;
    printf("Step %d: %d\n", numberOfSteps, value);
    while (value > 1) {
        if (value % 2 == 1) {
            value = 3 * value + 1;
        }
        else {
            value /= 2;
        }
        numberOfSteps++;
        printf("Step %d: %d\n", numberOfSteps, value);
    }
    printf("It takes %d steps to reach %d.\n", numberOfSteps, value);
}

void lesson20() {
    /**
     * Lesson 20 — For Loops
     */
    printf("* Lesson 20 *\n");
    /* Variables */
    char *characterList[] = {"Kazuma Kiryu",
                             "Takayuki Yagami",
                             "Ryuji Goda",
                             "Taiga Saejima",
                             "Masaharu Kaito",
                             "Ichiban Kasuga",
                             "Goro Majima",
                             "Fumiya Sugiura"};
    /* Index */
    int i;
    /* For Loop */
    for (i = 0; i < 8; i++) {
        printf("Index %d: %s\n", i, characterList[i]);
    }
}

void lesson21() {
    /**
     * Lesson 21 — 2D Arrays & Nested Loops
     */
    printf("* Lesson 21 *\n");
    /* 2D Array */
    int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    /* Print values of the 2D array using nested for loops. */
    int i;
    int j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("nums[%d][%d] = %d\n", i, j, nums[i][j]);
        }
    }
    /* Special 2D Array — String Array */
    char* groups[] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel"};
    /* Print values of the string array using nested for loops. */
    int h;
    int k;
    for (h = 0; h < sizeof(groups)/sizeof(groups[0]); ++h) {
        printf("groups[%d] = %s\n", h, groups[h]);
        for (k = 0; k < sizeof(groups[h])/sizeof(groups[h][0]); ++k) {
            if (groups[h][k] == '\0') {
                break;  // Stop showing when the buffer is reached
            }
            printf("groups[%d][%d] = %c\n", h, k, groups[h][k]);
        }
    }
}

void lesson22() {
    /**
     * Lesson 22 — Memory Addresses
     */
    printf("* Lesson 22 *\n");
    /* Variables */
    int age = 21;
    double gpa = 6.42;
    char grade = 'A';
    /* Physical memory addresses (%p means pointer) */
    printf("Age address: %p\n", &age);
    printf("GPA address: %p\n", &gpa);
    printf("Grade address: %p\n", &grade);
}

void lesson23() {
    /**
     * Lesson 23 — Pointers
     */
    printf("* Lesson 23 *\n");
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
}

void lesson24() {
    /**
     * Lesson 24 — De-referencing Pointers
     */
    printf("* Lesson 24 *\n");
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
    /* De-referenced pointer variables */
    printf("Age: %d\n", *pAge);
    printf("GPA: %lf\n", *pGpa);
    printf("Grade: %c\n", *pGrade);
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
    lesson06();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson07();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson08();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson11();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson12();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson13();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson14();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson16();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson17();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson18();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson20();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson21();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson22();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson23();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson24();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson25();
    printf("------------------------------------------------------------------------------------------------\n");
    lesson26();
    printf("------------------------------------------------------------------------------------------------\n");
    return 0;
}
