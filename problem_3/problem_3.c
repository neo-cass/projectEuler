#include <stdio.h>
#include <math.h>

int largestPFactor(int num){
    int largest;
    for(int i = 1; i<=sqrt(num); i++){
        if(num%i==0){
            if(largestPFactor(i)==i){
                largest=i;
            }
            
        }
    }
    return largest;
}

int main(){
    printf("%d", largestPFactor(10));
    return 1;
}