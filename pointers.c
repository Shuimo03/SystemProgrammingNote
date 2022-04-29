#include<stdio.h>

void add_one(int *p){
    *p = *p+1;
}

int main(){
    int y = 3;
    add_one(&y);
    printf("%d\n",y);
    return 0;
}