#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int obtainMatrixSize(FILE *matrixFile)   //deseo parar el puntero hacia el archivo
{
  int matrixSize;
  char size[256];
  fscanf ( matrixFile, "%s", size ); // save matrix size from the file
  matrixSize = atoi(size);
  return matrixSize;
}

int main ()
{
  FILE *matrixFile;
  int i, j, matrixSize;
  char size[256];
  int** matrix;

  matrixFile = fopen ( "matriz.in", "r" ); // read mode

  fscanf ( matrixFile, "%s", size ); // save matrix size from the file
  matrixSize = atoi(size);

  matrix = malloc ( matrixSize * sizeof ( int * ) );

  for ( i = 0; i < matrixSize; i++ )
    matrix[i] = malloc ( 4 * sizeof ( int ) );

  fclose ( matrixFile );


}
