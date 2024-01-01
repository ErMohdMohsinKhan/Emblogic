#include "headers.h"
#include "declarations.h"
int stack[MAX];
int topA = -1;
int topB = MAX;
int val;
int main()
{
	int vl;
	int choice;
	do
	{
	printf("%s : Begin\n", __func__);
	printf("%s : <<< MENU >>>\n", __func__);
	printf("1. PUSH IN STACK A\n");
	printf("2. PUSH IN STACK B\n");
	printf("3. POP FROM STACK A\n");
	printf("4. POP FROM STACK B\n");
	printf("5. DISPLAY STACK A\n");
	printf("6. DISPLAY STACK B\n");
	printf("7. CLEAR STACK A\n");
	printf("8. CLEAR STACK B\n");
	printf("0. EXIT\n");
	printf("%s : Enter your choice\n", __func__);
	scanf("%d",&choice);	

	if(choice == 0)
		exit(EXIT_SUCCESS);
	else if(choice == 1)
		pushA();
	else if(choice == 2)
		pushB();
	else if(choice == 3)
	{
		vl = popA();
		if(vl != -999)
		{
			printf("%s : Value popped from Stack'A'-> %2d\n", __func__, vl);
		}
	}
	else if(choice == 4)
	{
		vl = popB();
                if(vl != -999)
                {
                        printf("%s : Value popped from Stack'B'-> %2d\n", __func__, vl);
		}
	}
	else if(choice == 5)
		displayA();
	else if(choice == 6)
		displayB();
	else if(choice == 7)
		clearA();
	else if(choice == 8)
		clearB();
	val = -999;
	}while(choice != 0);
	printf("%s : End\n", __func__);
	return 0;
}
