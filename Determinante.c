#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int obtainMatrixSize(FILE archivo)   //deseo parar el puntero hacia el archivo
{
  int matrixSize;

  return matrixSize;
}

int main ()
{
  FILE *matrixFile;
  int i, j, matrixSize;
  char aux[256];
  int** matrix;

  matrixFile = fopen ( "matriz.in", "r" ); // read mode

  fscanf ( matrixFile, "%s", aux ); // save matrix size from the file
  matrixSize = atoi(aux);

  matrix = malloc ( matrixSize * sizeof ( int * ) );

  for ( i = 0; i < matrixSize; i++ )
    matrix[i] = malloc ( 4 * sizeof ( int ) );

  fclose ( matrixFile );


}
