/**
 * @file call-by-ref.c
 * @author Sue-You-Both
 * @brief WAP to write a call by referance to swap values 
 *        of two variables and print it in the main function.
 * @version 0.1
 * @date 2021-01-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>

void swap(int *a, int *b) {
    *b = *b - *a;
    *a = *a + *b;
    *b = *a - *b;
}

int main() {

    int a = 10;
    int b = 50;

    swap(&a, &b);
    printf("The value of a and b now is %d and %d respectively.", a, b); 
   
    return 0;
}