#include "headers.h"
#include "declarations.h"
void getNo ()
{
        int n,d,r, count;
	n = d = r = '\0';
	count = 0;
        printf("%s : Begin\n", __func__);
        printf("%s : Enter the Number\n", __func__);
        scanf("%d", &n);
	int i = 0;
        while(n){
                d=n%10;
                r=r*10+d;
                n=n/10;
		count++;
        }
	arr[0] = r;
	arr[1] = count;
        printf("%s : End\n", __func__);
}
