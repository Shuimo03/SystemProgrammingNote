#define _GNU_SOURCE
#include <assert.h>
#include <sched.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    cpu_set_t set;
    int ret, i;
    CPU_ZERO(&set);

    ret = sched_getaffinity(0,sizeof (cpu_set_t),&set);
    if (ret == -1){
        perror("sched_getaffinity");
    }

    for(i = 0; i < CPU_SETSIZE; i++){
        int cpu = CPU_ISSET(i,&set);
        printf("cpu=%i is %s\n",i,cpu ? "set":"unset");
    }
    return 0;
}