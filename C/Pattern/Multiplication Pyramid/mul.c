#include<stdio.h>
void main(){

    int n = 50;
    int i;
    int j;

    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("%d ", n);
            n -= 5;
        }
        printf("\n");
    }

}