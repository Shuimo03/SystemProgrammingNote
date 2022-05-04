#include<stdio.h>

/**
 * 用Gcc编译这段代码的RISC-V汇编代码，查看结果。
 * 
 */
long long int fact(long long int n){
    if(n < 1){
        return 1;
    }else{
        return(n*fact(n-1));
    }
}

int main(){
    
}
