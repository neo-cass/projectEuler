#include <stdio.h>
#include <stdlib.h>

int calcEvenFibSum(int range){
    int total = 2;
    int term = 1;
    int fib1 = 1;
    int fib2 = 2;
    int newFib;
    while(1){
        newFib = fib1+fib2;
        if(newFib>range){
            break;
        }
        if(newFib%2==0){
            total+=newFib;
        }
        fib1 = fib2;
        fib2 = newFib;
    }
    return total;
    
}

int main(){
    printf("%d", calcEvenFibSum(4000000));
    return 1;
}