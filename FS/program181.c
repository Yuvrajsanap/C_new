
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    char FileName[30];
    int fd=0;

    printf("Enter the name of file that you want to open froam current directory\n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1){
        printf("Unable to open %d file \n",FileName);
    }
    else
    {
        printf("%s gets opened succesfully with file discription %d\n",FileName,fd);
        close(fd);
    }

    return 0;
}