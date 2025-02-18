#include<stdio.h>
void main(){

    int i;
    int arr[5] = {3, 4, 1, 5, 2};
    int smallest = arr[0];

    for(i=0; i<5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("Smallest Element: %d", smallest);

}