#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char Arr[20]={"\n"};

    fd = open("Hello.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable toopen the file\n");
        return -1;
    }
    else 
    {
        printf("file gets opend with fd :%d\n",fd);
        read(fd,Arr,13);
        printf("Data from file is :%s\n ",Arr);
        close(fd);
    }
    return 0;
}