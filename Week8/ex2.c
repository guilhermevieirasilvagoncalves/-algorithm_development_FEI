/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 2
*/
#include <stdio.h>
#include <stdlib.h>
void functionx3(int x1[], int x2[], int n1, int n2)
{
  int m = 0;
  if(x1[n1-1] > x2[n2-1])
  {
    m = x1[n1-1];
  }
  else if(x1[n1-1] < x2[n2-1])
  {
    m = x2[n2-1];
  }
  int x3[m], c = 0;
  for(int i = 0; i < n1; i++)
  {
    for(int j = 0; j < n2; j++)
    {
      if(x1[i] == x2[j])
      {
        x3[c] = x1[i];
        c++;
        break;
      }
    }
  }
  int *qtd = &c;
  for(int i = 0; i < n1; i++){
    printf("x1[%d] = %d ", i, x1[i]);
  }
  printf("\n");
  for(int i = 0; i < n2; i++){
    printf("x2[%d] = %d ", i, x2[i]);
  }
  printf("\nQuantidade = %d\n", *qtd);
  for(int i = 0; i < c; i++)
  {
    printf("x3[%d] = %d\n", i, x3[i]);
  }
}
int main(void)
{
  int n1, n2, *x1, *x2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  x1 = malloc(n1*sizeof(int));
  x2 = malloc(n2*sizeof(int));
  for(int i = 0; i < n1; i++)
  {
    scanf("%d", x1+i);
  }
  for(int i = 0; i <n2; i++)
  {
    scanf("%d", x2+i);
  }
  functionx3(x1, x2, n1, n2);
}