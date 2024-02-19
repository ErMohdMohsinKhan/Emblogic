#include <stdio.h>
union practice
{
	int det[5];
	char a;
};
int main(void)
{
	union practice C1;
	int i;
	printf("a : %c\n", C1.a);
	for(i=0; i<5; i++)
	{
		printf("Enter the value : \n");
		scanf("%d", &C1.det[i]);
	}
	C1.a = 'A';
	printf("\na : %c\n", C1.a);
	C1.a = 'D';
	printf("\na : %c\n", C1.a);
	printf("Values enterd are : ");
	for(i=0; i<5; i++)
	{
		printf("%2d->%3d\t", i, C1.det[i]);
	}
	printf("\n");
	printf("\na : %c\n", C1.a);
	return 0;
}
