#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 5;

    int k = 5;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ", k);
            k--;
        }
        k=5;
        printf("\n");
    }

}