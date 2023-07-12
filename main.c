#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
