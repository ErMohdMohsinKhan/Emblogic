#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* compressFile (void* arg)
{
	DSCompress dco;
	printf("%s : Begin\n", __func__);
	printf("%s : Give the filename to compress\n", __func__);
	getchar();
	dco.fd = *(int*)(*fptr[2])((void*)"reading"); //openFile()
	printf("%s : File opened successfully, fd : %d\n", __func__, dco.fd);
	dco.ma = (char*)(*fptr[3])((void*)&dco.fd); //createMasterArray
	printf("%s : Master Array : %s\n",__func__, dco.ma);
	int cl = *(int*)(*fptr[5])((void*)dco.ma); //codelength
	printf("%s : Code length of Master Array : %d\n",__func__, cl);
	if ( (cl >= 2) || (cl <= 7) )
	{
		(*fptr[cl+8])((void*)&dco);
	}
	close(dco.fd);	
	//free(dco.fd);
	printf("%s : End\n", __func__);
	return 0;
}
