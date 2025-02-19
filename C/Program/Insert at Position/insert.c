#include<stdio.h>
void main(){

    int i;
    int a[100] = {1,2,3,4,5,6,7,8,9,10};
    int pos = 5;

    // Shift elements to right
    for(i=10-1; i>=pos; i--){
        a[i+1] = a[i];
    }

    int insert = 20;
    a[pos] = insert;

    printf("Array after inserting %d at position %d: ", insert, pos);
    for(i=0; i<11; i++){
        printf("%d ", a[i]);
    }
}