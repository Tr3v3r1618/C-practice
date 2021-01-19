#include<stdio.h>

int main()
{

    int i, j;
    int total_students, total_subjects, total_marks;

    printf("Enter the number of students: ");
    scanf("%d", &total_students);

    printf("Enter the number of subject: ");
    scanf("%d", &total_subjects);

    int martrix[total_students][total_subjects];
    char name[total_students][20];

    for(i = 0; i < total_students; i++)
    {
        printf("Enter the name of student %d: ",i+1);
        scanf("%s", &name[i]);

        printf("\nEnter the marks of %s: \n",name[i]);

        for(j = 0; j < total_subjects; j++)
        {
            printf("Subject %d: ", (j + 1));
            scanf("%d", &martrix[i][j]);
        }
    }

    for(i = 0; i < total_students; i++)
    {
        total_marks = 0;

        for(j = 0; j < total_subjects; j++)
        {
            total_marks += martrix[i][j];
        }

        printf("\nTotal marks of %s: %d", name[i], total_marks);
        printf("\nPercentage %d: %.2f", (i + 1), (float)total_marks/(100 * total_subjects) * 100);
    }

    return 0;
}