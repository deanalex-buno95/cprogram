#include <stdio.h>
#include <stdlib.h>


int main() {
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
