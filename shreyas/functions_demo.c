#include<stdio.h>

/*
 * return_type function_name(arguements/parameters) {
 *      // function body
 * }
 */

int calculateFactorial(int number); // prototype

int main() {

    int number;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &number);

    int fact = calculateFactorial(number);

    printf("Factorial is: %d", fact);

    return 0;
}

int calculateFactorial(int number) {  //defination
    if(number == 0) {
        return 1;
    }

    int i, fact = 1;
    
    for (i = number; i >= 1; i--) {
        fact = fact * i;
    }
    
    return fact;
}