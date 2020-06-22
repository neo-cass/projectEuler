#include <stdio.h>
int sum(int range){
    int total;
    for(int i = 1; i<range; i++){
        if(i % 3 == 0 || i % 5 == 0){
            total+=i;
        }
    }
    return total;
}

int main(){
    printf("%d\n", sum(1000));
    return 1;
}

