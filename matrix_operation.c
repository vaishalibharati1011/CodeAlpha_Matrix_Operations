#include <stdio.h>

#define SIZE 3

void inputMatrix(int matrix[SIZE][SIZE], char name)
{
    int i, j;

    printf("\nEnter elements of Matrix %c (%dx%d):\n", name, SIZE, SIZE);

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int i, j;
    int result[SIZE][SIZE];

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n===== MATRIX ADDITION RESULT =====\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("| ");
        for(j = 0; j < SIZE; j++)
        {
            printf("%4d ", result[i][j]);
        }
        printf("|\n");
    }
}

void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int i, j, k;
    int result[SIZE][SIZE];

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < SIZE; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\n===== MATRIX MULTIPLICATION RESULT =====\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("| ");
        for(j = 0; j < SIZE; j++)
        {
            printf("%4d ", result[i][j]);
        }
        printf("|\n");
    }
}

void transposeMatrixA(int A[SIZE][SIZE])
{
    int i, j;

    printf("\n===== TRANSPOSE OF MATRIX A =====\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("| ");
        for(j = 0; j < SIZE; j++)
        {
            printf("%4d ", A[j][i]);
        }
        printf("|\n");
    }
}

void transposeMatrixB(int B[SIZE][SIZE])
{
    int i, j;

    printf("\n===== TRANSPOSE OF MATRIX B =====\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("| ");
        for(j = 0; j < SIZE; j++)
        {
            printf("%4d ", B[j][i]);
        }
        printf("|\n");
    }
}


void displayMatrix(int matrix[SIZE][SIZE], char name)
{
    int i, j;

    printf("\nMatrix %c:\n", name);

    for(i = 0; i < SIZE; i++)
    {
        printf("| ");
        for(j = 0; j < SIZE; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main()
{
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int choice;

    printf("========================================\n");
    printf("      MATRIX OPERATIONS SYSTEM\n");
    printf("========================================\n");

    inputMatrix(A, 'A');
    inputMatrix(B, 'B');

    do
    {
        printf("\n========================================\n");
        printf("               MAIN MENU\n");
        printf("========================================\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Transpose Matrix A\n");
        printf("4. Transpose Matrix B\n");
        printf("5. Display Matrices\n");
        printf("6. Exit\n");
        printf("========================================\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {

            case 1:
                addMatrix(A, B);
                break;

            case 2:
                multiplyMatrix(A, B);
                break;

            case 3:
                transposeMatrixA(A);
                break;

            case 4:
                transposeMatrixB(B);
                break;

            case 5:
                displayMatrix(A, 'A');
                displayMatrix(B, 'B');
                break;

            case 6:
                printf("\nThank you for using Matrix Operations System.\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
