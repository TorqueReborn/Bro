#include <stdio.h>
#include <stdbool.h>

void printNormal(int start, int end);
void printReverse(int start, int end);

void main()
{

    int i = 1;
    int n = 4;
    int start = 0;
    int end = 0;
    int sub = 0;

    for (i = 0; i < n; i++){

        start = end + 1;
        if (i == 0){
            end = end + start;
            printNormal(start, end);
            continue;
        }

        sub = (i-1) + sub;
        end = end + start - sub;

        if (i % 2 == 1)
            printReverse(start, end);
        else
            printNormal(start, end);
    }
}

void printNormal(int start, int end)
{
    int i;
    for (i = start; i <= end; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void printReverse(int start, int end)
{
    int i;
    for (i = end; i >= start; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}