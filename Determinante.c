#include <stdlib.h>
#include <stdio.h>

int main ()
{
  FILE *matrixFile;
  int i, j, matrixSize;
  double** matrix;

  matrixFile = fopen ( "matriz.in", "r" ); // read mode

  fscanf ( matrixFile, "%d", &matrixSize ); // save matrix size from the file

  matrix = malloc ( matrixSize * sizeof ( double * ) );

  for ( i = 0; i < matrixSize; i++ )
    matrix[i] = malloc ( 4 * sizeof ( double ) );

  fclose ( matrixFile );


}
