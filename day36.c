// Q71-Read and print a matrix.

#include <stdio.h>
int main(){
    int rows, columns;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    printf("Enter the elements of the matrix: ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",  &matrix[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



// Q72-Find the sum of all elements in a matrix.

#include <stdio.h>
int main(){
    int rows, columns;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    printf("Enter the elements of the matrix: ");
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            
        }
    }

    printf("Sum = %d", sum);
    return 0;
}