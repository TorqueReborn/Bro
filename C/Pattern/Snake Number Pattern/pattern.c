#include<stdio.h>
#include<stdbool.h>

void main(){

    int i;
    int n = 5;
    int j;

    bool reverse = false;

    int count = 1;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(reverse){
                printf("%d ", count);
                count--;
            }else{
                printf("%d ", count);
                count++;
            }

            if(j%n == 0){
                reverse = !reverse;
                if(reverse){
                    count += n-1;
                }else{
                    count += n+1;
                }
            }

        }
        printf("\n");
    }

}