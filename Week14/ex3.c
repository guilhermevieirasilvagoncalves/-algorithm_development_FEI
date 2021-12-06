#include <stdio.h>

double harmonica(double numero, double contador, double i){
  numero = numero + 1/i;
  if(i == contador){
    return numero - 1;
  }

  return harmonica(numero, contador, i+1);
}

int main(void) {
  int contador, i = 1;
  scanf("%d", &contador);
  printf("%.4lf", harmonica(1, contador, i));
  return 0;
}