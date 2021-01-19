#include<stdio.h>

int main() {

    int arr[2] = {2, 4}; 

    int *ptrToArr;
    ptrToArr = arr;

    for(int i = 0; i < 2; i++) {
        printf("\narr[%d] = %d", i, *(ptrToArr+i));
    }

    return 0;
}