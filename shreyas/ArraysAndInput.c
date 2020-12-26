#include<stdio.h>
#include<conio.h>

int main(){
    // char alphabet ;
    // int asciiValue;

    // printf("Enter a character\n");
    // scanf("%c",&alphabet);
    
    // asciiValue=alphabet;
    
    // printf("The ASCII value of '%c' is %d", alphabet, asciiValue);
     
    float marks[5];
    
    printf("enter the marks of english: ");
    scanf("%f", &marks[0]);
    
    printf("enter the marks of maths: ");
    scanf("%f", &marks[1]);
    
    printf("enter the marks of biology: ");
    scanf("%f", &marks[2]);
    
    printf("enter the marks of chemistry: ");
    scanf("%f", &marks[3]);
    
    printf("enter the marks of physics: ");
    scanf("%f", &marks[4]);

    printf("the percentage obtain is: %.2f", (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/500*100);

     return 0;

}

