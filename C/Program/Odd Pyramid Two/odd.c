#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 5;

    for(i=1; i<=n; i++){
        for(j=1; j<=(2*i - 1); j++){
            printf("* ");
        }
        printf("\n");
    }

}