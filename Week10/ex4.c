#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char s[50];
  int aux;
  scanf("%s", s);
  int tamanho = strlen(s);
  for(int i = 0; i < tamanho; i++){
    if(s[i] > 64 && s[i] < 91){
      aux = s[i] + 32;
      printf("%c", aux);
    }
    else if(s[i] > 96 && s[i] < 123){
      aux = s[i] - 32;
      printf("%c", aux);
    }
    else{
      printf("%c", s[i]);
    }
  }
  return 0;
}