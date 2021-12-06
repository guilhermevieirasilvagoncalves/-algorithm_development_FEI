#include <stdio.h>
#include <math.h>

int hanoi(int n, int total){
  if(n != 0){
    total = total*2;
    return hanoi(n-1, total);
  }
  return total;
}

int main(void) {
  int t = 1;
  int n = 0;
  printf("Digite o numero de discos:\n");
  scanf("%d", &n);
  printf("Numero de movimentos com %d discos: %d.\n", n, hanoi(n, t) - 1);
  return 0;
}