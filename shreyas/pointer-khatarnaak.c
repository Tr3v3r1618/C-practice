#include <stdio.h>

void show();
void showadd(int);
void navinShow();

int main()
{
    void (*arr[3])();
    void (*(*ptr)[3])();
    int result1;
    arr[0] = show;
    arr[1] = showadd;
    arr[2] = navinShow;
    ptr = &arr;
    /*result1 =*/ (**ptr)();
    //printf("printing the value returned by show : %d", result1);
    (*(*ptr + 1))(65);
    (*(*ptr + 2))();
    return 0;
}

void show()
{
    int a = 65;
    printf("\na = %d", a);
    //return a++;
}

void showadd(int b)
{
    printf("\nAdding 90 to the value returned by show: %d", b + 90);
}

void navinShow()
{
    printf("\nNavin Show..");
}