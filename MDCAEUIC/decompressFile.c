#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* decompressFile(void* arg)
{
	printf("%s : Begin\n", __func__);
	int fd, ek, ret;
	DSCompress dco;
	printf("%s : Give the filename of the Encryption Key\n", __func__);
	getchar();
	dco.fd = *(int*)(*fptr[2])((void*)"reading"); //openFile()
        printf("%s : Enc Key File opened successfully, EK : %d\n", __func__, dco.fd);
        dco.ma = (char*)(*fptr[3])((void*)&dco.fd); //createMasterArray
        printf("%s : Master Array : %s\n",__func__, dco.ma);
	close(dco.fd);
/*	ret = read(ek, ma, 128); 
	if (ret == -1)
	{
		perror("read");
		(*fptr[1])((void*)"failure");
	}*/
	printf("%s : Give the filename to Decompress\n", __func__);
 //       getchar();
        dco.fd = *(int*)(*fptr[2])((void*)"reading"); //openFile()
        printf("%s : File opened successfully, fd : %d\n", __func__, dco.fd);

	
        int cl = *(int*)(*fptr[5])((void*)dco.ma); //codelength
        printf("%s : Code length of Master Array : %d\n",__func__, cl);
        if ( (cl >= 2) && (cl <= 7) )
        {
                (*fptr[cl+14])((void*)&dco);
        }
        close(dco.fd); 

	printf("%s : End\n", __func__);
	return 0;
}
