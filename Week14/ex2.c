#include <stdio.h>

int quant(int dados[], int N){
  int aux, count, contador = 0;
  for(int t = 1; t < N; t++){
    for(int i = 0; i < N - 1; i++){
      if(dados[i] > dados[i + 1]){
        aux = dados[i];
        dados[i] = dados[i + 1];
        dados[i + 1] = aux;
      }
    }
  }
  count = dados[0];
  for(int i = 0; i <= N; i++){
    if(count == dados[i]){
      contador++;
    }
    else{
      printf("%d aparece %d vez(es)\n", count, contador);
      contador = 1;
      count = dados[i];
    }
  }
  return 0;
}

int main(void){
  int N;
  scanf("%d", &N);
  int dados[N];
  for(int i = 0; i < N; i++){
    scanf("%d", &dados[i]);
  }
  quant(dados, N);
  return 0;
}