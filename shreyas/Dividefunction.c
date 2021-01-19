#include<stdio.h>

float divide(float num1, float num2);

int main(){

    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    float div = divide(num1, num2);

    printf("The divide of two numbers is: %f", div);

    return 0;
}

float divide(float num1, float num2){
    if (num2 == 0) {
        return 0;
    }

    return (num1 / num2);
}