#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char s[50];
  scanf("%s", s);
  int tamanho = strlen(s);
  printf("%d", tamanho);
  return 0;
}