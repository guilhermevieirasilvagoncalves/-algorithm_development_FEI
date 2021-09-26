#include <stdio.h>
#include <math.h>

int main(){
  double vet[100],n;
  int i;
  double soma;
  float raiz;

  scanf("%lf", &n);

  for (i=0; i<n; i++){
    scanf("%lf", &vet[i]);
  }

  for (i=0;i <n; i++){
    vet[i] = vet[i]*vet[i];
    soma += vet[i];
  }
  
  raiz = sqrt(soma);

  printf("Modulo = %.2f", raiz);
}