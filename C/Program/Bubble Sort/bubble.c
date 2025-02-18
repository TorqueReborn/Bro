#include<stdio.h>
void main(){

    int i;
    int j;
    int arr[5] = {5, 4, 3, 2, 1};
    int temp;

    for(i=0; i<5-1; i++){
        for(j=0; j<5-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

}