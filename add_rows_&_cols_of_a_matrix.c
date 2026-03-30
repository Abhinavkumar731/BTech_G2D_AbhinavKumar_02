#include <stdio.h>

int main() {
    int rows, cols, i, j, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum = 0; 
        for(j = 0; j < cols; j++) {
            sum += A[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    for(j = 0; j < cols; j++) {
        sum = 0; 
        for(i = 0; i < rows; i++) {
            sum += A[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}
