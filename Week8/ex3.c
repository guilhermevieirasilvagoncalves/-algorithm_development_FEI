/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 3
*/
#include <stdio.h>
#include <stdlib.h>
void recebenum(int vet[], int n)
{
  for(int i = 0; i < n; i++)
  {
    scanf("%d", (vet+i));
  }
}
int main(void)
{
  int n;
  int *vet;
  scanf("%d", &n);
  vet = malloc(n*sizeof(int));
  recebenum(vet, n);
  for(int i = 0; i < n; i++)
  {
    printf("v[%d] = %d\n", i, *(vet+i));
  }
  free(vet);
}