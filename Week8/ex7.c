/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 7
*/
#include <stdio.h>
#include <stdlib.h>
void inverter(int v[], int n)
{
  int vetinverter[n];
  for(int i = 0; i < n; i++)
  {
        vetinverter[i] = v[n-1-i];
        printf("v[%d] = %d\n", i, vetinverter[i]);
    }
}
int main()
{
  int n, *v;
  scanf("%d", &n);
  v = malloc(n*sizeof(int));
  for(int i = 0; i < n; i++)
  {
    scanf("%d", v+i);
  }
  inverter(v, n);
  free(v);
  return 0;
}