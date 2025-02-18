#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 4;

    for(i=n-1; i>=0; i--){
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

}