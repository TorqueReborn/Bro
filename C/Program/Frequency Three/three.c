#include<stdio.h>

int frequency(int arr[], int n, int find);

void main(){

    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int freq = frequency(arr, n, arr[i]);
        if(freq == 3){
            printf("%d occurs three times\n", arr[i]);
        }
    }

}

int frequency(int arr[], int n, int find){
    int i;
    int frequency = 0;

    for(i=0; i<n; i++){
        if(arr[i] == find){
            frequency++;
        }
    }

    return frequency;
}