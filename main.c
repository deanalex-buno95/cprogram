#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getTeamColor(int teamNumber) {
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
    int teamNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < sizeof(teamNumbers)/sizeof(teamNumbers[0]); ++i) {
        printf("Team %d color: %s\n", teamNumbers[i], getTeamColor(teamNumbers[i]));
    }
    return 0;
}
