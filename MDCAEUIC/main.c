#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
int main (void)
{
	printf("%s : Begin\n", __func__);
	init();
	while (1)
	{
		(*fptr[0])((void*)NULL); //mainMenu()
	/*	switch (choice)
		{
			case 1:
			       	(*fptr[6])(); //compressFile()	
		       		break;	       
			case 2:
			       	(*fptr[7])(); //compStats()	
		       		break;	       
			case 3:
			       	(*fptr[8])(); //decompressFile()	
		       		break;	       
			case 4:
			       	(*fptr[9])(); //decompStats()	
		       		break;	       
			case 0:
			       	(*fptr[1])("success"); //exitProg("success")	
		       		break;	       
			default:
				printf("%s : Invalid choice\n", __func__);
		} */
	}
	printf("%s : End\n", __func__);
	return 0;
}
