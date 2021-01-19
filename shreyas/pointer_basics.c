#include<stdio.h>

void displayValue(int *referance) {
    *referance += 20;
    printf("Value from function:: %d", *referance);
}

void displayNormal(int notReferance) {
    notReferance += 20;
    printf("Not Ref Value:: %d", notReferance);
}


int main() {

    int normalVariable = 20;
    int *pointerVariable;

    pointerVariable = &normalVariable;

    printf("Normal Value: %d\n", normalVariable);
    printf("Normal Address using percent u: %u\n", &normalVariable);
    printf("Normal Address using percent x: %x\n", &normalVariable);
    printf("Normal Address using percent p: %p\n", &normalVariable);
    printf("Pointer Value: %x\n", pointerVariable);
    printf("Value stored at pointer: %d\n", *pointerVariable);
    printf("Pointer Address: %x\n\n\n", &pointerVariable);

    // call by value
    displayNormal(normalVariable);
    printf("\n\n\nNow Value:: %d", normalVariable);
    
    // call by referance
    displayValue(&normalVariable);
    printf("\n\n\nNow Value:: %d", normalVariable);

    int arr[3] = {1,2,3};
    // int *arrP = arr;

    printf("\n\n\nValue = %d", *arr);

    return 0;
}

// void displayValue();