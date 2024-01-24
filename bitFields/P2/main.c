#include "headers.h"
#include "dataStruct.h"

int main()
{
	RGBColor pixelColor;

    	// Assume the pixel color is (12, 45, 18)
    	pixelColor.red = 12;
    	pixelColor.green = 45;
    	pixelColor.blue = 18;

    	printf("Pixel Color: R-%u G-%u B-%u\n", pixelColor.red, pixelColor.green, pixelColor.blue);

    	return 0;
}
