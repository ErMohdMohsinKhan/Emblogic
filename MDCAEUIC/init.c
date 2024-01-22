#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int var;
void* mainMenu(void*);
void* exitProg(void*);
void* openFile(void*);
void* createMasterArray(void*);
void* unique(void*);
void* codelength(void*);
void* compStats(void*);
void* compressFile(void*);
void* decompressFile (void*);
void* decompStats(void*);
void* compress2(void*);
void* compress3(void*);
void* compress4(void*);
void* compress5(void*);
void* compress6(void*);
void* compress7(void*);
void* decompress2(void*);
void* decompress3(void*);
void* decompress4(void*);
void* decompress5(void*);
void* decompress6(void*);
void* decompress7(void*);
void* findIndex(void*);
void* (*fptr[NOF])(void*);
int init()
{
	printf("%s : Begin\n",__func__);

	var = 0;
	fptr[0] = mainMenu;
	fptr[1] = exitProg;
	fptr[2] = openFile;
	fptr[3] = createMasterArray;
	fptr[4] = unique;
	fptr[5] = codelength;
	fptr[6] = compressFile;
	fptr[7] = compStats;
	fptr[8] = decompressFile;
	fptr[9] = decompStats;
	fptr[10] = compress2;
	fptr[11] = compress3;
	fptr[12] = compress4;
	fptr[13] = compress5;
	fptr[14] = compress6;
	fptr[15] = compress7;
	fptr[16] = decompress2;
	fptr[17] = decompress3;
	fptr[18] = decompress4;
	fptr[19] = decompress5;
	fptr[20] = decompress6;
	fptr[21] = decompress7;
	fptr[22] = findIndex;

        printf("%s : End\n",__func__);
        return 0;
}
