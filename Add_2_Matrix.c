#include<stdio.h>
int main (){
    int i, j, rows, cols;
    printf("Enter no. of rows&cols\n");
    scanf("%d%d",&rows,&cols);
    int A[rows][cols],B[rows][cols],C[rows][cols];
    printf("Enter elments of lst Mat.\n");
    for(i=0; i<rows; i++)
    for(j=0; j<cols; j++)
    scanf("%d",&A[i][j]);
 printf("Enter elements of 2nd Mat.\n");
    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            scanf("%d",&B[i][j]);
            
    // Matrix Addition
    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            C[i][j] = A[i][j] + B[i][j];
            
    // Result print karna
    printf("Resultant Matrix (Sum):\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n"); // Nayi line ke liye
    }
    
    return 0;
}