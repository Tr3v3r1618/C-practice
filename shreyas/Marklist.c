#include <stdio.h>

int main()
{
    int i, j;
    int total_students, total_subjects, total_marks;
    // char name;

    printf("Enter the number of Matrix");
    printf("\nEnter the number of students: ");
    scanf("%d", &total_students);

    printf("Enter the number of subjects: ");
    scanf("%d", &total_subjects);

    int matrix[total_students][total_subjects];

    for (i = 0; i < total_students; i++) {
        printf("\nEnter the marks of student %d: \n", (i+1));

        for (j = 0; j < total_subjects; j++) {
            printf("Subject %d: ", (j+1));
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < total_students; i++) {       
        total_marks = 0;

        for (j = 0; j < total_subjects; j++) {
            total_marks += matrix[i][j];
        }

        printf("Total Marks for student %d: %d\n", (i+1), total_marks);
        printf("Percentage for student %d: %.2f\n", (i+1), ((float)total_marks / (100 * total_subjects)) * 100.0);
    }

    return 0;
}