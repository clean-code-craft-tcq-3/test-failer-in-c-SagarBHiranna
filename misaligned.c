#include "misaligned.h"

Colorpair colorpair;

int printAndUpdateColorData(int pairnumber) {
    int i = 0, j = 0, localPairNumber=0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            localPairNumber = localPairNumber+1;
            if (localPairNumber == pairnumber)
            {
                strcpy(colorpair.MajorColor , majorColor[i]);
	            strcpy(colorpair.MinorColor , minorColor[i]);
            }
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printAndUpdateColorData(10);
    assert(result == 25);
    printf("| %s | %s\n", colorpair.MajorColor, colorpair.MinorColor);
    assert(strcmp(colorpair.MajorColor, "Red") == 0);
	assert(strcmp(colorpair.MinorColor, "Slate") == 0);
    printf("All is well (maybe!)\n");
    return 0;
}