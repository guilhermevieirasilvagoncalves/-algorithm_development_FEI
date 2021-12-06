/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 4
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n;
  scanf("%d", &n);
  int *vet;
  vet = malloc(n*sizeof(int));
  int somaimpar = 0;
  for(int i = 0; i < n; i++)
  {
    scanf("%d", vet+i);
    if(*(vet+i) % 2 != 0)
    {
      somaimpar = somaimpar + *(vet+i);
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(*(vet+i) % 2 != 0)
    {
      printf("v[%d] = %d\n",i, vet[i]);
    }
  }
  printf("Soma dos ímpares = %d", somaimpar);
  free(vet);
  return 0;
}