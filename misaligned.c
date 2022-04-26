#include "misaligned.h"

#define Max_CountInEachColorTable 5


int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int validateColorPairFromNumber(int pairNumber, char *majorColorName, char *minorColorName)
{
    //colourPair paircolor;
    int returnValue = 0;
    int zeroBasedPairNumber = pairNumber - 1;
    char MajorColor[8] = 
        majorColor[(zeroBasedPairNumber / Max_CountInEachColorTable)];
    char MinorColor[8] =
        minorColor[(zeroBasedPairNumber % Max_CountInEachColorTable)];
    //return colorPair;
    if (strcmp(MajorColor, majorColorName) && strcmp(MajorColor, minorColorName))
    {
        returnValue = 1;
    }
    return returnValue;
}

int main() {
    int result = printColorMap();
    //int validPair = validateColorNumberPair();
    printf("%d", result);
    assert(result == 25);
    int a=validateColorPairFromNumber(23, "Violet", "Green");
    assert(a==0);
    printf("All is well (maybe!)\n");
    return 0;
}