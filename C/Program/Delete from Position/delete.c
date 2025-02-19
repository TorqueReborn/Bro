#include<stdio.h>
void main(){

    int i;
    int arr[5] = {1,2,3,4,5};
    int deletePos = 3;

    printf("Before deletion: ");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    for(i=deletePos; i<5; i++){
        arr[i] = arr[i+1];
    }

    printf("\nAfter deletion: ");
    for(i=0; i<4; i++){
        printf("%d ", arr[i]);
    }

}