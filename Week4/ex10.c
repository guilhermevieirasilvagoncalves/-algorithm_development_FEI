#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int indice(int qtd, int *lista, int valor){
  int a, retorno;
  for (a=0;a<qtd;a++){
    if(lista[a]==valor){
      retorno=a;
      break;
    }
    else{
      retorno=-1;
    }
  }
  printf("Busca: %d",retorno);
  return 0;
}

int main(){
  int qtd, i, valor;
  scanf("%d",&qtd);
  int lista[qtd-1];
  for(i=0;i<qtd;i++){
    scanf("%d",&lista[i]);
  }
  scanf("%d",&valor);
  indice(qtd, lista, valor);
  return 0;
}