#include<stdio.h>
void main(){

    int i;
    int j;
    int n = 5;

    for(i=n; i>=1; i--){
        for(j=i; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    

}