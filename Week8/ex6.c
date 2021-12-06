/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 6
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 3
int main(void) {
  int i, j;
  int **m3;
  int **m1, **m2, aux = 0;
  int k;
  int m[i][j];
  m1 = malloc(tam*sizeof(int*));
  for(i=0;i < tam; i++)
  {
    m1[i] = malloc(tam*sizeof(int));
  }
  for(int i = 0; i < tam; i++)
  {
		for(int j = 0; j < tam; j++)
    {
      scanf("%d",&m1[i][j]);
		}
	}
  m2 = malloc(tam*sizeof(int*));
  for(i=0;i < tam; i++)
  {
    m2[i] = malloc(tam*sizeof(int));
  }
  for(int i = 0; i < tam; i++
  ){
		for(int j = 0; j < tam; j++)
    {
      scanf("%d",&m2[i][j]);
		}
	}
  m3 = malloc(tam*sizeof(int*));
  for(i=0;i < tam; i++)
  {
    m3[i] = malloc(tam*sizeof(int));
  }
  for(i = 0; i < tam; i++)
  {
    for(j=0; j < tam ; j++)
    {
      for(int k = 0; k < tam ; k++){
        aux = aux + (m1[i][k] * m2[k][j]);
      }
      m3[i][j] = aux;
      aux = 0;
    }
  }
  for(int i = 0; i < tam; i++)
  {
		for(int j = 0; j < tam; j++)
    {
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
  free(m1);
  free(m2);
  free(m3);
  return 0;
}