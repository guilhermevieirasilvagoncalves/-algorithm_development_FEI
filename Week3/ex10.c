#include <stdio.h>

int main ()

{

int a, n, i;

float s, m;

{

scanf("%d",&n);

s = 0;

for (i = 1; i <= n; i++)

{
  scanf("%d", &a);
  s = s + a;
}  
  m = s / n; 
  printf("Media = %f \n", m);
}
}