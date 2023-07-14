#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeapYear(int year) {
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

bool isRightHeight(double height) {
    /* Use if-else conditions and || */
    if (height < 160.0 || height > 231.0) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    /* Variables for year */
    int year1 = 2000;
    int year2 = 1984;
    int year3 = 1800;
    int year4 = 1765;
    int years[] = {year1, year2, year3, year4};
    /* Use if-else conditions for year */
    for (int i = 0; i < sizeof(years)/sizeof(years[0]); ++i) {
        if (isLeapYear(years[i])) {
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
        if (isRightHeight(heights[i])) {
            printf("%.2lf meters is just right.\n", heights[i]);
        }
        else {
            printf("%.2lf meters is either too short or too tall.\n", heights[i]);
        }
    }
    return 0;
}
