#include<stdio.h>
void main(){

    int i;
    int arr[10] = {5, 7, 2, 4, 8, 9, 14, 3, 6, 15};
    int largest = arr[0];
    int secondLargest = arr[0];

    for(i=0; i<10; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for(i=0; i<10; i++){
        if(arr[i]!= largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second Largest element: %d\n", secondLargest);

}