# C Programming

## Description
My first C programming project, learning the basics of C programming.

## Lessons Taken

### July 12, 2023

#### Lesson 1 — `"Hello World!"` And Shapes
When starting a new project, there will be only be this code snippet that prints out the statement, `"Hello World!"`.

Input:
```c
#include <stdio.h>

int main() {
    printf("* Lesson 01 *\n");
    
    printf("Hello, World!\n");
    
    return 0;
}
```

Output:
```
Hello World!

```

From there, I updated the code to where it prints the statement twice.

Input:
```c
#include <stdio.h>

int main() {
    printf("* Lesson 01 *\n");
    
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    
    return 0;
}
```

Output:
```
Hello World!
Hello World!

```

Then, I updated the code to where it prints a triangle made up of binary digits.

Input:
```c
#include <stdio.h>

int main() {
    printf("000010000\n");
    printf("000111000\n");
    printf("001111100\n");
    printf("011111110\n");
    printf("111111111\n");
    
    return 0;
}
```

Output:
```
000010000
000111000
001111100
011111110
111111111

```

#### Lesson 2 — Variables
While inputting the same value on every data output is doable, it is not exactly practical, especially with larger projects.
Repeating the same value is inefficient, so there is a need to contain these values, to which the value  can just be replaced once, and be done with it.

To start of, I created two variables (a string and an integer) and display them in sentences using the value placeholders like `"%s"` and `"%d"` to reflect the values in the output.

Input:
```c
#include <stdio.h>

int main() {
    char characterName[] = "Santos";  // String variable
    int characterAge = 21;  // Integer variable
    printf("My name is %s.\n", characterName);  // Use string placeholder
    printf("I am %d years old.\n", characterAge);  // Use integer placeholder
    
    return 0;
}
```

Output:
```
My name is Santos.
I am 21 years old.

```

Then, I changed the value of each variable and did the same thing, which reflects the same output format, but different values.

Input:
```c
#include <stdio.h>

int main() {
    char characterName[] = "John";  // String variable
    int characterAge = 55;  // Integer variable
    printf("My name is %s.\n", characterName);  // Use string placeholder
    printf("I am %d years old.\n", characterAge);  // Use integer placeholder
    
    return 0;
}
```

Output:
```
My name is John.
I am 55 years old.

```

Lastly, I modified the person's name after the statements, which shows the reassigned value of the variable.

Input:
```c
#include <stdio.h>

int main() {
    char characterName[] = "John";  // String variable
    int characterAge = 55;  // Integer variable
    printf("My name is %s.\n", characterName);  // Use string placeholder
    printf("I am %d years old.\n", characterAge);  // Use integer placeholder
    characterAge = 20;
    printf("I used to play basketball when I was %d years old.\n", characterAge);  // Use replaced value for integer placeholder
    
    return 0;
}
```

Output:
```
My name is John.
I am 55 years old.
I used to play basketball when I was 20 years old.

```

#### Lesson 3 — Data Types
Every value falls into a particular data type, which explains itself, the kind of data we are representing.

Here is a few lines of variables used:
```c
#include <stdio.h>

int main() {
    int age = 21;  // Integer variable.
    double gpa = 6.42;  // Double variable (with decimal).
    float height = 1.69f;  // Float variable (less memory space used than double).
    char grade = 'D';  // Character variable (use single inverted commas, only one character).
    char name[] = "Santos";  // String of characters (use double inverted commas, array of characters, cannot be modified).
    
    return 0;
}
```

The list of variable data types used (and not used):
- `int` — Integer
- `double` — Double (64-bit decimal)
- `float` — Float (32-bit decimal)
- `char` — Character (Any single character between single inverted commas):
  - `char[]` — An array of characters, known as a string (a line of characters between double inverted commas).
- `void` — Not used here, but it is used when a procedure does not return anything.

#### Lesson 4 — `printf()` Function
`printf` is a very vital function for printing out outputs.
Typically, there are things to note about this function.

The list of notes are:
- Basic printing — Whatever is in the string will be printed out.
- End line — By default, if another `printf` function call falls after it, it will continue from the same line. Hence, `\n` is used to allow subsequent calls to print the line below the previous.
- Special characters — Some characters, such as `"` and `'` may not work if typed by itself. Hence, a backslash is used to allow these string characters to output. 
- Format specifiers — Utilizing modulo sign formatting, like `%s` and `%d`, allows us to input values into the string without needing to modify the string itself:
  - Multiple — You can do multiple specifiers, which will be taken in order.
  - Using variables — Variables can be inputs to represent values as well.

Input:
```c
#include <stdio.h>

int main() {
    printf("Hello ");  // Basic printing
    printf("World\n");  // End line
    printf("\"Juan\"\n");  // Special characters
    printf("%d%% success rate.\n", 90);  // Format specifier
    printf("My favorite %s is %f.\n", "number", 95.69420);  // Format specifiers
    int favorite = 95;
    printf("My favorite number is %d.\n", favorite);  // Utilize variables
    
    return 0;
}
```

Output:
```
Hello World
"Juan"
90% success rate.
My favorite number is 95.694200.
My favorite number is 95.

```

#### Lesson 5 — Numbers And Math
Like every language, numbers and Math will take place.
We can simply print out a number of either `int`, `float`, or `double` type.
We can also do addition `+`, subtraction `-`, multiplication `*`, and division `/`.
The `math.h` module also has other functions such as `pow` for `x^e`, `ceil` for rounding up, and `floor` for rounding down.
Keep in mind that there are certain changes to data types depending on the operation.

The list of that being:
- Any operation between an `int` value and a `float`/`double` value returns a `float`/`double` value.
- Division between two `int` values returns the quotient value.

Input:
```c
#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", 9.5);  // Simple number
    printf("%f\n", 5.0 + 4.5);  // Addition
    printf("%f\n", 5.0 - 4.5);  // Subtraction
    printf("%f\n", 5.0 * 4.5);  // Multiplication
    printf("%f\n", 5.0 / 4.5);  // Division
    printf("%f\n", 5 + 4.5);  // Add integer and double returns double
    printf("%d\n", 7 / 4);  // Divide integer by integer returns integer truncated
    printf("%f\n", 5 / 4.0);  // Divide integer by double returns double
    int num = 5;
    printf("%d\n", num);  // Use variables
    printf("%f\n", pow(2, 3));  // x^y
    printf("%f\n", ceil(5.9));  // Round up to nearest whole number
    printf("%f\n", floor(5.9));  // Round down to nearest whole number
    
    return 0;
}
```

Output:
```
9.500000
9.500000
0.500000
22.500000
1.111111
9.500000
1
1.250000
5
8.000000
6.000000
5.000000

```

#### Lesson 6 — Comments
Comments help others to understand complex code.
It is best when used sparingly.

There are two types of comments:
- Inline/commented-out `//` comments.
- Container `/**/` comments.

Examples:
```c
#include <stdio.h>

int main() {
    /* Explanation of code */

    /*
    Insert commented-out code here…
    printf("Hello World!");
    */

    printf("Comments are fun!");  // Inline comment
    
    return 0;
}
```

#### Lesson 7 — Constants
By default, variables can be reassigned to different values, provided that the data type is exact.
However, there are some values that programmers want to avoid people from mutating.
Hence, with the use of `const`, they can turn these variables into immutable constants that cannot be modified.
They can be the assigned read-only variables (spelled in `UPPERCASE_WITH_UNDERSCORES`), or direct inputs to the `printf`.
Any reassignment to the read-only variables will throw an error.

Example of `regularVariables` and `CONSTANT_VARIABLES`:
```c
#include <stdio.h>

int main() {
    int num = 5;
    printf("%d\n", num);  // Standard procedure
    num = 8;
    printf("%d\n", num);  // With modified variable
    const int FAV_NUM = 95;
    printf("%d\n", FAV_NUM);  // With variable that cannot be modified (throws error before build creation, different letter case for best practices)
    printf("95\n");  // Special constant 1 (direct string input, piece of data unchanged)
    printf("%d\n", 95);  // Special constant 2 (direct integer input, piece of data unchanged)
    
    return 0;
}
```

#### Lesson 8 — User Inputs
As opposed to `printf`, the use of `scanf` and `fgets` allows the user to input data into the system, instead of getting an output.

##### Part 1 — `scanf`
In most cases, `scanf` is used to input most data types into the system, whether that being a character or number.
Typically, for anything other than a `char[]` string type, an ampersand `&` is used to get the input.

Input:
```c
#include <stdio.h>

int main() {
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
    
    return 0;
}
```

Output:
```
Enter your grade: D
Your grade is D.
Enter your age: 21
Your age is 21.
Enter your GPA: 6.42
Your GPA is 6.420000.

```

##### Part 2 — `fgets`
As mentioned, the previous method can be used for strings, to which the `&` sign is not needed.
However, that method brings its set of problems.
For instance, spaces would be considered as a terminating character.
Hence, an alternative can be used which is `fgets`.
The computer will take the input, even spaces, till it reaches the string's buffer, making it much easier to get values like full names.
However, this also has issues too.
Notably, all values will have a `\n` character before the buffer, making it to where every value after the input will print to the new line.

Input:
```c
#include <stdio.h>

int main() {
    char name[45];  // Create a string of up to 45 characters
    printf("Enter your name: ");
//    scanf("%s", name);  Original way of getting strings (problem with lines of strings with spaces)
    fgets(name, 45, stdin);  // Get a string of characters with spaces (`stdin` is the console used for C, disadvantage is the unavoidable newline).
    printf("Your name is %s.\n", name);
    
    return 0;
}
```

Output:
```
Enter your name: Ryuma Santos
Your name is Ryuma Santos
.

```

#### Lesson 9 — Basic Calculator
Making use of the previous lessons for a basic calculator.

Link:<a href="https://github.com/deanalex-buno95/cprogramcalculator"> https://github.com/deanalex-buno95/cprogramcalculator </a>

#### Lesson 10 — Mad Libs Game
Making use of the previous lessons for a Mad Libs game.

Link:<a href="https://github.com/deanalex-buno95/cprogrammadlibs"> https://github.com/deanalex-buno95/cprogrammadlibs </a>

#### Lesson 11 — Arrays
Most of the time, we want to store multiple values of the same type all at once.
This is where arrays come in.

They are fixed-length lists of values we can contain.
Typically, it is declared by putting square brackets `[]` beside the identifier of the variable, and the values would be separated by commas with curly brackets `{}`.
If it is declared as mentioned, there is no need to mention the length.
However, when declaring an empty array (not creating), the length must be mentioned within the square brackets.

In an array, you can obtain the value by indexing (for example, `luckyNumbers[5] → 5`).
Since it is also mutable, by indexing, we can also add in new values (`luckyNumbers[4] = 11`).

One thing to note is that strings are also arrays (array of characters), but since the typical expression `""` is commonplace, it is represented as such.

Input:
```c
#include <stdio.h>

int main() {
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
    
    return 0;
}
```

Output:
```
0
10
100
// insert any wack value here…

```

#### Lesson 12 — Functions
Most of the time, we will have blocks of code to which we would reuse most of the time.
Having to type the same blocks of code for different values would be extremely tiring and messy, especially for long programs.
That is where functions come in handy.

Functions are blocks of code that can be used when called by `main()`.
Some functions just require the calling of it, while others may require parameters to get the relevant output.

Note that all functions have to be on the top before the `main()` since it needs to know what functions to expect before running the code.
However, this issue can be circumvented by prototyping, which involves mentioning the functions first, then writing the block of code below it, even after `main()`.
This can be seen in the example in Lesson 13.

Input:
```c
#include <stdio.h>

void sayHelloWorld() {
    printf("Hello World!\n");
}

void sayHelloPerson(char name[]) {
    printf("Hello %s!\n", name);
}

void describePerson(char name[], int age) {
    printf("Your name is %s, and you are %d year(s) old!\n", name, age);
}

int main() {
    /* Note that the function called must be above the main */
    sayHelloWorld();
    sayHelloPerson("Alexi");
    sayHelloPerson("Bryce");
    describePerson("Charles", 25);
    describePerson("Donovan", 30);
    
    return 0;
}
```

Output:
```
Hello World!
Hello Alexi!
Hello Bryce!
Your name is Charles, and you are 25 year(s) old!
Your name is Donovan, and you are 30 year(s) old!

```

#### Lesson 13 — Return Statement
Functions are not just procedures, they can also return a value that can be used for the main program

One thing to note is that the `main()` function returns an `int` because it makes use of integers to determine if the program runs successfully.
`0` for success, and any other integer for errors.

Input:
```c
#include <stdio.h>

double cube(double num);  // Prototype

int main() {
    /* Note that the function called must be above the main, unless you prototype the function */
    printf("Answer: %f\n", cube(5.0));
    
    return 0;
}

double cube(double num) {
    return num * num * num;
}
```

Output:
```
125.000000

```

#### Lesson 14 — If Statement

Input:
```c
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

int main() {
    /**
     * Lesson 14 — If Statement
     */
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
    
    return 0;
}
```

Output:
```
2000 is a leap year.
1984 is a leap year.
1800 is a common year.
1765 is a common year.
159.000000 meters is either too short or too tall.
232.000000 meters is either too short or too tall.
206.000000 meters is just right.

```

#### Lesson 15 — Better Calculator
Making use of the previous lessons to improve the calculator from lesson 09.

Link:<a href="https://github.com/deanalex-buno95/cprogramcalculator"> https://github.com/deanalex-buno95/cprogramcalculator </a>

#### Lesson 16 — Return Statement

Input:
```c
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

int main() {
    /**
     * Lesson 16 — Switch Statement
     */
    int teamNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < sizeof(teamNumbers)/sizeof(teamNumbers[0]); ++i) {
        printf("Team %d color: %s\n", teamNumbers[i], f_getTeamColor(teamNumbers[i]));
    }
    
    return 0;
}
```

Output:
```
Team 0 color: N/A
Team 1 color: RED
Team 2 color: BLUE
Team 3 color: YELLOW
Team 4 color: GREEN
Team 5 color: ORANGE
Team 6 color: CYAN
Team 7 color: PURPLE
Team 8 color: WHITE

```

#### Lesson 17 — Structs

Input:
```c
int main() {
    /**
     * Lesson 17 — Structs
     */
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
    
    return 0;
}
```

Output:
```
<insert student1.age here>
6.42
Santos
BIT
<insert student2.age here>
5.25
Alexandra
Nursing

```

#### Lesson 18 — While Loops

Input:
```c
int main() {
    /**
     * Lesson 18 — While Loops
     */
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
    
    return 0;
}
```

Output:
```
Write a value: 29
Step 0: 29
Step 1: 88
Step 2: 44
Step 3: 22
Step 4: 11
Step 5: 34
Step 6: 17
Step 7: 52
Step 8: 26
Step 9: 13
Step 10: 40
Step 11: 20
Step 12: 10
Step 13: 5
Step 14: 16
Step 15: 8
Step 16: 4
Step 17: 2
Step 18: 1
It takes 18 steps to reach 1.

```

#### Lesson 19 — Guessing Game
Making use of the previous lessons for a guessing game.

Link:<a href="https://github.com/deanalex-buno95/cprogramguessinggame"> https://github.com/deanalex-buno95/cprogramguessinggame </a>

#### Lesson 20 — For Loops

Input:
```c
int main() {
    /**
     * Lesson 20 — For Loops
     */
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
    
    return 0;
}
```

Output:
```
Index 0: Kazuma Kiryu
Index 1: Takayuki Yagami
Index 2: Ryuji Goda
Index 3: Taiga Saejima
Index 4: Masaharu Kaito
Index 5: Ichiban Kasuga
Index 6: Goro Majima
Index 7: Fumiya Sugiura

```

#### Lesson 21 — 2D Arrays & Nested Loops

Input:
```c
int main() {
    /**
     * Lesson 21 — 2D Arrays & Nested Loops
     */
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
    
    return 0;
}
```

Output:
```
nums[0][0] = 1
nums[0][1] = 2
nums[1][0] = 3
nums[1][1] = 4
nums[2][0] = 5
nums[2][1] = 6
groups[0] = Alpha
groups[0][0] = A
groups[0][1] = l
groups[0][2] = p
groups[0][3] = h
groups[0][4] = a
groups[1] = Bravo
groups[1][0] = B
groups[1][1] = r
groups[1][2] = a
groups[1][3] = v
groups[1][4] = o
groups[2] = Charlie
groups[2][0] = C
groups[2][1] = h
groups[2][2] = a
groups[2][3] = r
groups[2][4] = l
groups[2][5] = i
groups[2][6] = e
groups[3] = Delta
groups[3][0] = D
groups[3][1] = e
groups[3][2] = l
groups[3][3] = t
groups[3][4] = a
groups[4] = Echo
groups[4][0] = E
groups[4][1] = c
groups[4][2] = h
groups[4][3] = o
groups[5] = Foxtrot
groups[5][0] = F
groups[5][1] = o
groups[5][2] = x
groups[5][3] = t
groups[5][4] = r
groups[5][5] = o
groups[5][6] = t
groups[6] = Golf
groups[6][0] = G
groups[6][1] = o
groups[6][2] = l
groups[6][3] = f
groups[7] = Hotel
groups[7][0] = H
groups[7][1] = o
groups[7][2] = t
groups[7][3] = e
groups[7][4] = l

```

#### Lesson 22 — Memory Addresses

Input:
```c
int main() {
    /**
     * Lesson 22 — Memory Addresses
     */
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
```

Output:
```
Age address: 000000dce15ffd0c
GPA address: 000000dce15ffd00
Grade address: 000000dce15ffcff

```

#### Lesson 23 — Pointers

Input:
```c
int main() {
    /**
     * Lesson 23 — Pointers
     */
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
```

Output:
```
Age address: 000000dce15ffcf4
GPA address: 000000dce15ffce8
Grade address: 000000dce15ffce7

```

#### Lesson 24 — De-referencing Pointers

Input:
```c
int main() {
    /**
     * Lesson 24 — De-referencing Pointers
     */
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
    
    return 0;
}
```

Output:
```
Age address: 000000dce15ffcf4
GPA address: 000000dce15ffce8
Grade address: 000000dce15ffce7
Age: 21
GPA: 6.420000
Grade: A

```

#### Lesson 25 — Writing Files

Input:
```c
int main() {
    /**
     * Lesson 25 — Writing Files
     */
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
    
    return 0;
}
```

Output:
```
Kiryu and Yagami written into rggCharacters.txt
Goda and Saejima appended into rggCharacters.txt

```

#### Lesson 26 — Reading Files

Input:
```c
int main() {
    /**
     * Lesson 26 — Reading Files
     */
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
    
    return 0;
}
```

Output:
```
Kiryu,Red
Yagami,Blue
Goda,Yellow
Saejima,Green

```
