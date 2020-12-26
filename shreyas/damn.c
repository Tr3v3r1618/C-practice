#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2; 
    int firstEven=0, secondEven=0;

    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    if(num1 == num2)
        printf("The square is: %d", num1*num2);
    else
    {
        firstEven = num1%2; 
        secondEven = num2%2;
        
        if(firstEven){
            if(!secondEven){
                printf("Num1: Even\nNum2: Odd");
            }
            else{// if both numbers even
                if(num1>num2)
                    printf("The difference is: %d", num1-num2);
                else
                    printf("The difference is: %d", num2-num1);
            }
        }
        else if(!secondEven)// this block only executes when num1 is odd.
            printf("The addition is: %d", num1+num2); // both are odd
        else
            printf("Num1: Odd\nNum2: Even");
    }
    
    return 0;
}