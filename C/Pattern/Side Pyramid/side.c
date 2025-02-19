#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 6;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

}