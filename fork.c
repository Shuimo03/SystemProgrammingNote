#include<unistd.h>
#include<stdio.h>

int main(){

    pid_t fpid;
    int cnt = 0;
    fpid = fork();

    if(fpid < 0){
        printf("error in fork");
    }else if(fpid == 0){
        printf("i am child. Process id is %d\n",getpid());
    }else{
        printf("i am parent. Process id is %d\n",getpid());
    }
    return 0;
}