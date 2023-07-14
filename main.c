#include <stdio.h>
#include <stdlib.h>


int main() {
    /* Variables */
    char* characterList[] = {"Kazuma Kiryu",
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
