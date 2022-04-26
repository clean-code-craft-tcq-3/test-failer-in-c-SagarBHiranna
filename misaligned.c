#include "misaligned.h"

#define Max_CountInEachColorTable 5

struct colorPair
{
	char MajorColor[8];
	char MinorColor[8];
};


int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int getColorPairFromNumber(int pairNumber)
{
    colourPair paircolor;
    int zeroBasedPairNumber = pairNumber - 1;
    paircolor.majorColor = 
        majorColor[(zeroBasedPairNumber / Max_CountInEachColorTable)];
    paircolor.minorColor =
        minorColor[(zeroBasedPairNumber % Max_CountInEachColorTable)];
    //return colorPair;
    return 1;
}

int main() {
    int result = printColorMap();
    //int validPair = validateColorNumberPair();
    printf("%d", result);
    assert(result == 25);
    int a=getColorPairFromNumber(10);
    assert(a==0);
    printf("All is well (maybe!)\n");
    return 0;
}