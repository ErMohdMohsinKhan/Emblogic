#include<stdio.h>
#include<iostream>
#include<unistd.h>
#define GetCurrentDir getcwd

std::string GetCurrentWorkingDir(void)
{
    char buff[FILENAME_MAX];
    GetCurrentDir(buff, FILENAME_MAX);
    std::string current_working_dir(buff);
    return current_working_dir;
}

int main()
{
    std::cout<<GetCurrentWorkingDir()<<std::endl;
    return 0;
}
