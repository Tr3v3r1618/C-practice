#include<stdio.h>

void generateFibonacciSeries(int totalElements);

int main() {

    int totalElements;

    printf("Enter the total number of elements: ");
    scanf("%d", &totalElements);

    generateFibonacciSeries(totalElements);

    return 0;
} 

void generateFibonacciSeries(int totalElements) {
    int i, t3, t1 = 0, t2 = 1;

    for(i = 0; i < totalElements; i++) {
        printf(" %d", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;    
    } 
}
