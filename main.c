#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sayHelloWorld() {
    printf("Hello World!\n");
}

void sayHelloPerson(char name[]) {
    printf("Hello %s!\n", name);
}

void describePerson(char name[], int age) {
    printf("Your name is %s, and you are %d year(s) old!", name, age);
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
