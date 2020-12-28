#include <stdio.h>
#include <conio.h>

int main() {   
    int i;
    int totalMarks = 0;
    int marks[5];

    for(i = 4; i >= 0; i--) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
    } 

    for(i = 4; i >= 0; i--) {
        totalMarks += marks[i];
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f", ((float)totalMarks/500) * 100);

    return 0;
}