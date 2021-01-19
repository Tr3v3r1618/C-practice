#include <stdio.h>

int main() {
    
    int x,y;
    int i,j,k;


    printf("Enter dimentions for matrix::");
    printf("\nEnter the value of X: ");
    scanf("%d", &x);
    
    printf("Enter the value of Y: ");
    scanf("%d", &y);
    
    int matrix1[x][y];
    int matrix2[x][y];
    int result[x][y];
    
    printf("\n\nEnter values for first matrix dimentions ::");
    for(i = 0; i < x; i++) {
        printf("\n");
        for(j = 0; j < y; j++) {
            printf("(%d,%d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("\nEnter values for second matrix dimentions ::");
    for(i = 0; i < x; i++) {
        printf("\n");
        for(j = 0; j < y; j++) {
            printf("(%d,%d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // TODO: Do matrix multiplication here in result array
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
        result[i][j] = 0;
            for (k = 0; k < y; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];

            }
        }
        
    }

    printf("\n\nThe Matrix Multiplication Result is::\n");

    for(i = 0; i < x; i++) {
        
        for(j = 0; j < y; j++) {
          printf("%d ", result[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}