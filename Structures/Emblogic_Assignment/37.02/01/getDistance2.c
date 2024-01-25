#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

gD2 getDistance2 (void)
{
        printf("%s : Begin\n", __func__);
	gD2 d;
	printf("%s : Enter the Distance in feet/inch\n", __func__);
	scanf("%d%f", &d.feet, &d.inch);
        printf("%s : End\n", __func__);
        return d;
}
