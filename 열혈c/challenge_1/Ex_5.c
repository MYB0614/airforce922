// Ex_5.c
// Prime number

#include <stdio.h>

void isPrime(int count){
    int Is_prime = 0;
    int num = 1, div_count = 0;
    
    while(Is_prime < 10){
        for (int i = 1; i <= num; i++){
            if(num % i == 0) div_count++;
        }
        if(div_count == 2){
            Is_prime++;
            printf("is prime : %d \n",num);
        }
        num++;
        div_count = 0;
    }
}

int main()
{
    int val = 10;
    isPrime(val);
    
    return 0;
}
