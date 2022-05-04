#include<stdio.h>

long long int sum(long long int n,long long int acc){
    if (n > 0){
        return sum(n-1,acc+n);
    }
    return acc;
}

int main(){
    
}