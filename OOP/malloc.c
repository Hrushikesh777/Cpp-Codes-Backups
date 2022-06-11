#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr = malloc(10 * sizeof(int));
    arr[0] = 10;
    printf("%d", arr[0]);
    return 0;
}