#include<stdio.h>
#include<time.h>

int main(){

    clockid_t clocks[] = {
        CLOCK_REALTIME,
        CLOCK_MONOTONIC,
        CLOCK_PROCESS_CPUTIME_ID,
        CLOCK_THREAD_CPUTIME_ID,
        (clock_t)-1
    };

    for(int i = 0; clocks[i] != (clock_t)-1; i++){
        struct timespec res;
        int ret = clock_getres(clocks[i],&res);
        if(ret){
            perror("clock_getres");
        }else{
            printf("clock = %d sec = %ld nsec = %ld\n",clocks[i],res.tv_nsec,res.tv_nsec);
        }
    }
    return 0;
}