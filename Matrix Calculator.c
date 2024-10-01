MATRIX CALCULATOR

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], sum[10][10], diff[10][10], mult[10][10], i, j, l, row, col, c;
    printf("Enter the number of rows (1-5): ");
    scanf("%d", &row);
    printf("Enter the number of columns (1-5): ");
    scanf("%d", &col);
    printf("\n Matrix A\n");
    printf("\n Enter element you want to insert in the matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n Matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n\n Matrix B");
    printf("\n Enter element you want to insert in the matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n Matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf ("Press 1 for Addition\n");


  printf ("Press 2 for Subtraction\n");

  printf ("Press 3 for Multiplication\n");
  scanf ("%d", &c);
  switch (c){
    case 1:  
  
    printf("\nA+B=\n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d   ", sum[i][j]);
            if (j == col - 1) {
        printf("\n\n");
      }
        }
    }
    break;
    case 2:
    printf("\nA-B=\n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            diff[i][j] = A[i][j] - B[i][j];
        }
    }
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d   ", diff[i][j]);
            if (j == col - 1) {
        printf("\n\n");
      }
        }
    }
    break;
    case 3:
    printf("\nA*B=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            mult[i][j] = 0;
            for (l = 0; l < col; l++)
            {
                mult[i][j] = mult[i][j] + A[i][l] * B[l][j];
            }
            printf("%d", mult[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    break;
    default:
    printf("Your choice is invalid");
    break;
  }
    
}

