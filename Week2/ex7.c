#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, contador, n;
  contador = 3;
  a = 1;
  b = 1;
  scanf("%d", &n);
  while (contador <= n){
  c = a + b;
  a = b;
  b = c;
  contador += 1;
  }
  printf("%d", c);
}