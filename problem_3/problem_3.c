#include <stdio.h>
#include <math.h>

int isPrime(long num){
    for(long i = 2; i<sqrt(num); i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}


long largestPFactor(long num){
    long largest=0;
    for(long i = 2; i<=sqrt(num); i++){
        if(num%i==0){
            long ipair = num/i;
            int iBool = isPrime(i)==1 && i>largest;
            int ipairBool = isPrime(ipair)==1 && ipair>largest;

            if(iBool){
                largest=i;
            }
            if(ipairBool){
                largest = ipair;
            }
        }
    }
    if(largest==0){largest=num;}
    return largest;
}



int main(){
    printf("%ld\n\n\n", largestPFactor((long)600851475143));
    return 1;
}