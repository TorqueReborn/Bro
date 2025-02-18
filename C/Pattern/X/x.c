#include<stdio.h>
void main(){

    int i;
    int j;
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        for(j=1; j<=num; j++){
            if(
                ( i == j) ||
                (i+j == num + 1)
            ){
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }

}