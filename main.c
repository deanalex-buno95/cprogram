#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    /* Attributes */
    char name[45];
    char major[45];
    int birthYear;
    double gpa;
};


int main() {
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
