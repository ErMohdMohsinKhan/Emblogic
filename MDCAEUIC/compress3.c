#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* compress3 (void* arg)
{
        DSCompress *dco;
        DSUnique dun;
        int ret, i, size, cfd;
        unsigned char byt, ch, cc;
        printf("%s : Begin\n",__func__);
        dco = (DSCompress*)arg;
        size = lseek(dco->fd, 0, SEEK_END)-1;
        lseek(dco->fd, 0, SEEK_SET);
        printf("%s : Please give a name to the Compressed File\n", __func__);
        cfd = *(int*)(*fptr[2])((void*)"creat"); //Openfile
	while(1)
        {
                byt ^= byt;
                ret = read(dco->fd, &dun.ch, 1);  //h
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((void*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);    //findIndex
                ch = cc = (unsigned char)i; //Converting index to char
		ch <<= 5;
                byt |= ch;
                if (size == 0)
                        goto LA;
                ret = read(dco->fd, &dun.ch, 1);  //e
		if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 3;
                byt |= ch;
		if (size == 0)
                        goto LA;
		ret = read(dco->fd, &dun.ch, 1);  //\b
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
		ch <<= 5;
                ch >>= 6;
                byt |= ch;
		//Writing 
		printf("Byte : %d\n", byt);
                ret= write (cfd, &byt, 1);
                if (ret == -1)
                {
                        perror("write");
                        (*fptr[1])((void*)"failure");
                }
		//Second part
		byt ^= byt;
		ch = cc;
		ch <<= 7;
		byt |= ch;
		if (size == 0)
                        goto LA;
		ret = read(dco->fd, &dun.ch, 1);  //t
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 1;
                byt |= ch;
		if (size == 0)
                        goto LA;
                ret = read(dco->fd, &dun.ch, 1);  //h
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 4;
                byt |= ch;
		if (size == 0)
                        goto LA;
                ret = read(dco->fd, &dun.ch, 1);  //r
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 7;
                byt |= ch;
		//Writing 
                printf("Byte : %d\n", byt);
                ret= write (cfd, &byt, 1);
                if (ret == -1)
                {
                        perror("write");
                        (*fptr[1])((void*)"failure");
                }

		//Third part
		 byt ^= byt;
                ch = cc;
                ch <<= 6;
                byt |= ch;
                if (size == 0)
                        goto LA;
                ret = read(dco->fd, &dun.ch, 1);  //e
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 2;
                byt |= ch;
                if (size == 0)
                        goto LA;
		ret = read(dco->fd, &dun.ch, 1);  //w
                if (ret == -1)
                {
                        perror("read");
                        (*fptr[1])((char*)"failure");
                }
                size--;
                dun.ma = dco->ma;
                i = *(int*)(*fptr[22])((void*)&dun);
                ch = cc = (unsigned char)i;
                ch <<= 5;
                ch >>= 5;
                byt |= ch;
		//Writing 
LA:             printf("Byte : %d\n", byt);
                ret= write (cfd, &byt, 1);
                if (ret == -1)
                {
                        perror("write");
                        (*fptr[1])((void*)"failure");
                }
		 if (size == 0)
                        break;
	}
	close(cfd);
        printf("%s : Please give a name of the Encryption key File\n", __func__);
        cfd = *(int*)(*fptr[2])((void*)"creat"); //Openfile
        write(cfd, dco->ma, strlen(dco->ma));
        if (ret == -1)
        {
               perror("write");
               (*fptr[0])((void*)"failure");
        }

        close(cfd);

        printf("%s : End\n",__func__);
        return 0;
}



