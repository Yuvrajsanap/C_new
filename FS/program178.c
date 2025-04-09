//to write the data

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

    int fd=0;
    int iRet=0;
    char Arr[]="Angular Web Devlopment";

    fd=open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1){
        printf("Unable to open file \n");
    }
    else{
        iRet=write(fd,Arr,23);
        printf("%d byte gets succesfully written into the file \n",iRet);

        close(fd);
    }

    return 0;
}