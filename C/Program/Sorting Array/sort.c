#include<stdio.h>
void main(){

    int i;
    int j;
    int arr[5] = {1, 5, 3, 2, 4};
    int temp;

    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

}