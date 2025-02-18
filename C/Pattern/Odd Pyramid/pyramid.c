#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 4;

    for(i=1; i<=n; i++){
        for(j=1; j<=i*3; j++){
            printf("* ");
        }
        printf("\n");
    }
}