#include <stdio.h>
#include <stdlib.h>

void init_array (long**, int, int);
void print_array(long**, int, int);

int main() {

    long** matrix;  
    int rows, cols;
    int i;

    scanf("%d %d", &rows, &cols);

    matrix = (long**)malloc(sizeof(long*)*rows);

    for (i=0 ; i < rows ; i++) {
        matrix[i] = (long*)malloc(sizeof(long)*cols);
    }

    init_array (matrix, rows, cols);
    print_array(matrix, rows, cols);
    
    for (i=0 ; i < rows ; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

void init_array(long** matrix, int rows,int cols) {
    int i,j;

    for (i=0 ; i < rows ; i++) 
    for (j=0 ; j < cols ; j++) 
        matrix[i][j] = i+j+2;
/*      *(*(matrix+i)+j) = i+j+2;	*/
}

void print_array(long** matrix, int rows,int cols) {
    int i,j;

    for (i=0 ; i < rows ; i++) {
      for (j=0 ; j < cols ; j++) 
        printf ("%ld\t", matrix[i][j]);
      printf ("\n");
    }
}
