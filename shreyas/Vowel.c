#include<stdio.h>
#include<conio.h>

int main (){

    char Alphabet;

    printf("Enter the Alphabet : ");
    scanf("%c", &Alphabet );

    switch(Alphabet) {
        case 'a' :
        case 'A' : 
            printf("%d", Alphabet);
            break;

        case 'e' :
        case 'E' :
            printf("%d", Alphabet);
             break;

        case 'i' :
        case 'I' :
            printf("%d", Alphabet);
            break;

         case 'o' :
         case 'O' :
            printf("%d", Alphabet);
            break;

        case 'u' :
        case 'U' :
            printf("%d", Alphabet);
            break;

        default :
            printf("%c", Alphabet);
            break;

    }

    

    

    return 0;   
}
