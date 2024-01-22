#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* decompress3(void* arg)
{
    DSCompress *dco;
    DSUnique dun;
    int ret, i, size, cfd;
    unsigned char byt, ch, cc;
    printf("%s : Begin\n",__func__);
    dco = (DSCompress*)arg;
    size = lseek(dco->fd, 0, SEEK_END)-1;
    lseek(dco->fd, 0, SEEK_SET);
    printf("%s : Please give a name to the Decompressed File\n", __func__);
    cfd = *(int*)(*fptr[2])((void*)"creat"); // Open file
    while(1)
    {
        ret = read(dco->fd, &byt, 1);
        if (ret == -1)
        {
            perror("read");
            (*fptr[1])((void*)"failure");
        }

        // First part
        ch = byt;
        cc = (ch >> 5) & 0x07;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

        if (size == 0)
            goto LA;

        // Second part
        byt ^= byt;
        ret = read(dco->fd, &byt, 1);
        if (ret == -1)
        {
            perror("read");
            (*fptr[1])((void*)"failure");
        }

        ch = byt;
        cc = (ch >> 7) & 0x01;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

        cc = (ch >> 1) & 0x07;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

        if (size == 0)
            goto LA;

        // Third part
        byt ^= byt;
        ret = read(dco->fd, &byt, 1);
        if (ret == -1)
        {
            perror("read");
            (*fptr[1])((void*)"failure");
        }

        ch = byt;
        cc = (ch >> 6) & 0x03;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

        cc = (ch >> 2) & 0x07;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

        cc = (ch >> 5) & 0x07;
        dun.ma = dco->ma;
        dun.ch = (char)cc;
        *(int*)(*fptr[21])((void*)&dun);  // addToMap

LA:     if (size == 0)
            break;
    }
    close(cfd);
    printf("%s : End\n",__func__);
    return 0;
}

