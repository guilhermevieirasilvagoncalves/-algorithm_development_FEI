#include <stdio.h>
int main(void) {
  int n;
  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &n);
  int vetor[n];
  printf("Matriz A:\n");
  int matrizA[2][2];
  for(int x = 0; x < 2; x++){
    for(int y = 0; y < 2; y++){
      scanf("%d", &matrizA[x][y]);
    }
  }
  printf("Mensagem cifrada:\n");
  for(int i = 0; i < n; i++){
    scanf("%d", &vetor[i]);
  }
  printf("Mensagem decifrada:\n");
  int resultado;
  for(int t = 0; t < n; t++){
    resultado = matrizA[0][0]*vetor[t]+matrizA[0][1]*vetor[t+1];
    printf("%c", resultado);
    resultado = matrizA[1][0]*vetor[t]+matrizA[1][1]*vetor[t+1];
    printf("%c", resultado);
    t += 1; 
  }
  return 0;
}