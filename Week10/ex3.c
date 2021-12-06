#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char s[50];
  int contador = 0;
  scanf("%s", s);
  int tamanho = strlen(s);
  for(int i = 0; i < tamanho; i++){
    if(s[i] > 96 && s[i] < 123){
      contador++;
    }
  }
  printf("%d", contador);
  return 0;
}