#include <stdio.h>
#include <stdlib.h>

struct Data{
  int dia;
  char mes[10];
  int ano;
}data;

int main(){
  struct Data data;
  printf("Digite o dia:\n");
  scanf("%d", &data.dia);
  printf("Escreva o mes:\n");
  scanf("%s", data.mes);
  printf("Digite o ano:\n");
  scanf("%d", &data.ano);
  printf("Data: %d/%s/%d\n", data.dia, data.mes, data.ano);
}