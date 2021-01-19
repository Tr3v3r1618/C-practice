#include<stdio.h>

void prime(int input);

int main() {

    int input;

    printf("Enter any number: ");
    scanf("%d", &input);

    prime(input);

    return 0;
}

void prime(int input) {
    int i;

    for(i = 2; i <= input/2; i++) {

        if(input % i == 0) {
            printf("It is not a prime number");
            return;
        }
    }

    printf("It is a prime number");
}