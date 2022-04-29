#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<stdio.h>

int main(){
    unsigned int queue_len;
    int fd,ret;
    ret = ioctl(fd,FIONREAD,&queue_len);
    if (ret < 0){
        perror("ioctl");
    }else{
        printf("%u bytes pending in queue\n",queue_len);
    }
    return 0;
}