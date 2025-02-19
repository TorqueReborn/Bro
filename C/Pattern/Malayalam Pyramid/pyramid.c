#include<stdio.h>
#include<string.h>
void main(){

    int i;
    int j;
    char word[] = "MALAYALAM";
    int len = strlen(word);

    for(i=0; i<len; i++){
        for(j=0; j<=i; j++){
            printf("%c", word[j]);
        }
        printf("\n");
    }

}