#include <stdio.h>
#include <stdlib.h>

int fib(int range, int* fibs, int size){
    fibs[0]=1;
    fibs[1]=2;
    int count = 2;
    do{
        if(count>size-1){
            int* old=fibs;
            fibs=(int*)realloc(sizeof(int),size+1000);
            free(old);
            size+=1000;
        }
        fibs[count] = fibs[count-1]+fibs[count-2];
    }while(fibs[count++]<range);
    
}

int calcEvenFibSum(int range){
    int total;
    for(int i = 1; i<range+1; i++){
        int fibNum = fib(i);
        if(fibNum%2==0){
            total+=fibNum;
        }
    }
    return total;
}

int main(){
    int * fibs = (int*)malloc(sizeof(int)*1000);

    printf("%d", calcEvenFibSum(10));
    return 1;
}