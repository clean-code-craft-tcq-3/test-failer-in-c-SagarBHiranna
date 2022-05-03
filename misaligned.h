#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cstring>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

struct Colorpair
{
	char MajorColor[8];
	char MinorColor[8];
};


int printAndUpdateColorData() ;

void updateColorPairNumberData(int colorPairNumberIdx, int majorColorIndex, int minorColorIndex);

void printOnScreen(int colorPairNumberIdx, char *majorColour, char *minorColour);