#include <stdio.h>
#include <conio.h>

int main() {   
    int i;
    int totalMarks = 0;
    int marks[5];

    i = 0;
    while(i < 5)
    {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        i++;
    } 

    i = 0;
    while (i < 5) 
    {
        totalMarks += marks[i];
         i++; 
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f", ((float)totalMarks/500) * 100);

    return 0;
}