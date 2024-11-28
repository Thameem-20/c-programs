#include<stdio.h>
void prime(int num);

int main(){
    int num = 0;
    prime(num);
    return 0;
}

void prime(int num){
    int prime = 1;
    if(num <= 1){
        prime = 0;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            prime = 0;
        }
    }
    if(prime == 0){
        printf("%d is not a prime number", num);
    }
    else{
        printf("%d is a prime number", num);
    }
}
