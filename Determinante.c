#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int** createEmptyMatrix(FILE *matrixFile)   
{
  int matrixSize;
  char size [ 256 ];
  int** matrix;

  fscanf ( matrixFile, "%s", size ); // save matrix size from the file
  matrixSize = atoi ( size );

  matrix = malloc ( matrixSize * sizeof ( int * ) );

  for ( int i = 0; i < matrixSize; i++ )
    matrix[i] = malloc ( 4 * sizeof ( int ) );

  return matrix;
}

int main ()
{
  FILE *matrixFile;
  int i, j, matrixSize;
  int** matrix;

  matrixFile = fopen ( "matriz.in", "r" ); // read mode

  matrix = createEmptyMatrix ( matrixFile );

  fclose ( matrixFile );


}
