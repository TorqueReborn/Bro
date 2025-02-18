#include<stdio.h>
void main(){
    int i;
    int arr[5] = {1, -5, 3, -2, 4};
    for(i=0; i<5; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
    printf("Non Zero Array: ");
    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}