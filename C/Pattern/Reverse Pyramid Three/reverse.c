#include<stdio.h>
void main(){

    int i;
    int j;

    for(i=4; i>=0; i--){
        for(j=0; j<i*3; j++){
            printf("* ");
        }
        printf("\n");
    }

}