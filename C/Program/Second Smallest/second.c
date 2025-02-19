#include<stdio.h>
void main(){

    int i;
    int arr[5] = {5, 4, 3, 2, 1};
    
    int smallest = arr[0];
    int secondSmallest = arr[0];

    // Finding Smallest
    for(i=0; i<5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    // Finding Second Smallest
    for(i=0; i<5; i++){
        if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }

    printf("Smallest: %d\n", smallest);
    printf("Second Smallest: %d", secondSmallest);

}