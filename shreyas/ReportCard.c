#include <stdio.h>
#include <conio.h>

int main()
{
    float english, maths, biology, chemistry, physics;

    printf("enter the marks of english: ");
    scanf("%f", &english);

    printf("enter the marks of maths: ");
    scanf("%f", &maths);

    printf("enter the marks of biology: ");
    scanf("%f", &biology);

    printf("enter the marks of chemistry: ");
    scanf("%f", &chemistry);

    printf("enter the marks of physics: ");
    scanf("%f", &physics);
    
    int per = (english + maths + chemistry + biology + physics) / 500*100;
    printf("Percentage: %.2f \n", per);
    
   

    printf("1.per >= 80.\n2.per >= 60 && per < 80.\n3.per >= 40 && per < 60.\n4.per < 4.\n");

    switch (per){

        case 1 : 
            printf("Your Grade is : %.2f", (float)per );
            break;
        case 2 : 
            printf("Your Grade is : %.2f", (float)per);
            break;
    }
return 0;   
}



