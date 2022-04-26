#include <stdio.h>
#include <assert.h>

struct colorPair
{
	char MajorColor[8];
	char MinorColor[8];
}colourPair;

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap() ;