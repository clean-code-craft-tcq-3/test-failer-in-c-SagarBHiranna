#include "misaligned.h"

Colorpair colorpair[25];

void printOnScreen(int colorPairNumberIdx, char *majorColour, char *minorColour)
{
    printf("%d | %s | %s\n", colorPairNumberIdx, majorColour, minorColour);
}

void updateColorPairNumberData(int colorPairNumberIdx, int majorColorIndex, int minorColorIndex)
{
    strcpy(colorpair[colorPairNumberIdx].MajorColor , majorColor[majorColorIndex]);
	strcpy(colorpair[colorPairNumberIdx].MinorColor , minorColor[minorColorIndex]);
}

int printAndUpdateColorData() {
    int majorColorIdx = 0, minorColorIdx = 0, colorPairNumberIdx=0;
    for(majorColorIdx = 0; majorColorIdx < 5; majorColorIdx++) {
        for(minorColorIdx = 0; minorColorIdx < 5; minorColorIdx++) {
            colorPairNumberIdx = colorPairNumberIdx+1;
            updateColorPairNumberData(colorPairNumberIdx, majorColorIdx, minorColorIdx);
            printOnScreen(colorPairNumberIdx, colorpair[colorPairNumberIdx].MajorColor, colorpair[colorPairNumberIdx].MinorColor);
        }
    }
    return majorColorIdx * minorColorIdx;
}

int main() {
    int result = printAndUpdateColorData();
    assert(result == 25);
    assert(strcmp(colorpair[23].MajorColor, "Violet") == 0);
	assert(strcmp(colorpair[23].MinorColor, "Green") == 0);
    assert(strcmp(colorpair[12].MajorColor, "Black") == 0);
	assert(strcmp(colorpair[12].MinorColor, "Orange") == 0);
    printf("All is well (maybe!)\n");
    return 0;
}