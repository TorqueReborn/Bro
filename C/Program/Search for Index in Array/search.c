#include<stdio.h>
void main(){

    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int search = 3;
    int index = -1;

    for(i=0; i<5; i++){
        if(arr[i] == search){
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Index: %d", index + 1);
    else
        printf("Not found");

}