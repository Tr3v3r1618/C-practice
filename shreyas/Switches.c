#include <stdio.h>
#include <conio.h>

int main()
{

    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    int number = 0;

    printf("1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Remainder.\n");
    scanf("%d", &number);

    switch (number)
    {
        case 1:
            printf("The addition of two numbers is : %d ",num1 + num2);
            break;

        case 2:
            printf("The substraction of two number is : %d ",  num1 - num2);
            break;

        case 3:
            printf("The multiplication of two number is : %d ",  num1 * num2);
            break;

        case 4:
            printf("The division of two number is : %.2f ", (float)num1 / (float)num2);
            break;

        case 5:
            printf("The remainder of two number is : %d ",  num1 % num2);
            break;
    }
    return 0;
}
