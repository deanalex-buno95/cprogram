#include <stdio.h>

int main() {
    char characterName[] = "John";  // String variable
    int characterAge = 55;  // Integer variable
    printf("My name is %s.\n", characterName);  // Use string placeholder
    printf("I am %d years old.\n", characterAge);  // Use integer placeholder
    characterAge = 20;
    printf("I used to play basketball when I was %d years old.\n", characterAge);
    return 0;
}
