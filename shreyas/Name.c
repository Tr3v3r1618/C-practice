#include <stdio.h>
#include <string.h>

int main()
{
   char baka[20] = "Rajratna";
    char baka1[20] = "Awale";
    char baka2[20];
   char baka3[20] = "is bakemono";
    strcpy(baka1, baka);
    printf("The name is: %s\n", baka1);

    strcat(baka, baka3);
    printf("The guy %s\n", baka);

   return 0;   
}    