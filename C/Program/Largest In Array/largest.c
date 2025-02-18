#include<stdio.h>
void main(){

    int i;
    int arr[5] = {3, 4, 1, 5, 2};
    int largest = arr[0];

    for(i=0; i<5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("Largest Element: %d", largest);

}