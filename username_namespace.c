#define _GNU_SOURCE
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<sched.h>
#include<signal.h>
#include<unistd.h>
#include<sys/capability.h>

#define STACK_SIZE (1024 * 1024)

static char child_stack[STACK_SIZE];
char* const child_args[] = {
    "/bin/bash",
    NULL
};

int child_main(void *args){
    printf("在子进程中\n");
    cap_t caps;
    
}