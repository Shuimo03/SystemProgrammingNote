#include<stdio.h>
#include<stdlib.h>

typedef struct header_t{
    int size;
    int magic;
}header_t;

int main(){

    printf("struct: %ld\n",sizeof(header_t));

    return 0;
}