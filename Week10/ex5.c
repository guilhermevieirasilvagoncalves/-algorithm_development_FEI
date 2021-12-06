#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char s[60];
  fgets(s, sizeof s, stdin);
  int tamanho = strlen(s);
  for(int i = tamanho-2; i >= 0; i--){
    if(s[i] != '\x0'){
      printf("%c", s[i]);
    }
  }
  return 0;
}