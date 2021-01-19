#include<stdio.h>

int fibonacci(int num);

int main(){
    int i, terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(i = 0; i < terms; i++){
        printf("%d ", fibonacci(i));

    }
    return 0;
}

int fibonacci(int num) {
    if(num == 0 || num == 1) {
        return num;
    }
    
    return (fibonacci (num-1) + fibonacci(num-2));
}