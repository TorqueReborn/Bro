#include<stdio.h>
void main(){

    int i;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    float avg;

    for(i=0; i<10; i++){
        if(arr[i]%2 != 0){
            sum += arr[i];
        }
    }

    avg = sum / 5;
    printf("Average: %f", avg);

}