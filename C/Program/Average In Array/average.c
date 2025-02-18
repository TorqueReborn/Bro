#include<stdio.h>
void main(){

    int i;
    int sum = 0;
    float avg;
    int arr[5] = {1,2,3,4,5};

    for(i=0; i<5; i++){
        sum += arr[i];
    }

    avg = sum/5;
    printf("Average : %f", avg);

}