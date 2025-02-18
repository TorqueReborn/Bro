#include<stdio.h>
void main(){

    int i;
    int sum = 0;
    float avg;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(i=0; i<10; i+=2){
        sum += arr[i];
    }

    avg = sum/5.0;
    printf("Average of even elements: %f", avg);

}