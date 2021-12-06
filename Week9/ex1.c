#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(){
  FILE *fr = fopen("maiorR.txt","r");
  double n, maior = -INFINITY;
  int ind = 0, total = 0;
  
  while(fscanf(fr, "%lf", &n) != EOF){
    if(n > maior){
      maior = n;
      ind = total;
    }
    total++;
  }

  fclose(fr);

  printf("Maior: %.4f na posicao %d\n", maior, ind + 1);
  printf("Total de Elementos: %d\n", total);

}