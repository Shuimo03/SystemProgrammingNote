#include<sys/time.h>
#include<stdio.h>

int main(){
    
    struct timeval tv;
    int ret = gettimeofday(&tv,NULL);
    if(ret){
        perror("gettimeofday");
    }else{
        printf("seconds=%ld useconds=%ld\n",(long)tv.tv_sec,(long)tv.tv_usec);
    }
    return 0;
}