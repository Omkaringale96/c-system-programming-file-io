#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int ret =0;
    ret = unlink("Demo.txt");

    if(ret== -1)
    {
        printf("unable to delete file\n");
        return -1;
    }
    else
    {
        printf("file gets succesfully delated\n");
    }
    return 0;
}