#include <stdio.h>
#include <stdlib.h>


int main() {
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
