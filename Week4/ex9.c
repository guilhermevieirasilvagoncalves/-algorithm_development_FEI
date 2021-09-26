#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distancia(int qtd, float *lista){
  float menor=lista[qtd-1], maior=0;

  for(int i=0;i<qtd;i++){
    for(int j=i+1;j<qtd;j++){
      if(lista[j]-lista[i]>maior){
        maior=lista[j]-lista[i];
      }
      if(lista[j]-lista[i]<menor){
        menor=lista[j]-lista[i];
      }
    }
  }

  printf("Menor Distancia: %.2f",menor);
  printf("\nMaior Distancia: %.2f",maior);
  return 0;
}

double ascendente(int qtd, float *lista){
    for (int i = 0; i < qtd; i++) {
        for (int j = i+1; j < qtd; j++) {
           if(lista[i] > lista[j]) {
               float temp = lista[i];
               lista[i] = lista[j];
               lista[j] = temp;
           }
        }
    }
    return *lista;
  }

int main(){
  int qtd;
  scanf("%d",&qtd);
  float lista[qtd]; 

  for(int i=0;i<qtd;i++){
    scanf("%f",&lista[i]);
  }
  *lista=ascendente(qtd, lista);
  distancia(qtd,lista);
}