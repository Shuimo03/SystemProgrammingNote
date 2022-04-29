#include<stdio.h>
#include<unistd.h>

int main(){

    int BUF_LEN = 10;
    char cwd[BUF_LEN];

    if(!getcwd(cwd,BUF_LEN)){
        perror("getcwd");
        return 1;
    }
    printf("cwd = %s\n", cwd);
    return 0;
}