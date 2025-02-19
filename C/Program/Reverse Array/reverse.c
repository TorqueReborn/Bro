#include<stdio.h>
void main(){

    int i;
    int j;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int temp;

    for(i=0; i<10-1; i++){
        for(j=0; j<10-1-i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Reversed Array: ");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }

}