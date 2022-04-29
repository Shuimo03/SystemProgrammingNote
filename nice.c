#include<unistd.h>
#include<stdio.h>

int main(){

    int ret;
    int errno  = 0;
    ret  = nice(10);
    if (ret == -1 && errno != 0){
        perror("nice");
    }
    else {
        printf("nice value is now %d\n",ret);
    }
    return 0;
}