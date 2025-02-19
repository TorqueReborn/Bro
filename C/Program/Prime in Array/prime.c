#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int n);

void main(){

    int n = 17;
    int arr[5] = {10, 11 ,12, 13, 14};
    int i;

    for(i=0; i<5; i++){
        if(checkPrime(arr[i])){
            printf("%d is Prime\n", arr[i]);
        }else{
            printf("%d is not Prime\n", arr[i]);
        }
    }
}

bool checkPrime(int n){
    int i;
    int flag = -1;
    for(i=2; i<n/2; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }

    if(flag == 0){
        return false;
    }else{
        return true;
    }
}