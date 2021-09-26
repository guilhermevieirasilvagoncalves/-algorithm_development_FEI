#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

struct meu{
  double x[MAX];
  double y[MAX];
  double dist[MAX];
  double res;
}deus;

int main(){
  struct meu deus;
  int n = 0;
  if(n > MAX){
    printf("Tamanho inválido.");
  }else{
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%lf", &deus.x[i]);
      scanf("%lf", &deus.y[i]);
    }
    
    for(int z = 0; z < n; z++){
      if(z == n - 1){
        deus.dist[z] = sqrt(pow(deus.x[z] - deus.x[0], 2) + pow(deus.y[z] - deus.y[0], 2));
      }else{
        deus.dist[z] = sqrt(pow(deus.x[z] - deus.x[z + 1], 2) + pow(deus.y[z] - deus.y[z + 1], 2));
      }
    }

    for(int i = 0; i < n; i++){
      deus.res += deus.dist[i];
    }

    printf("Perimetro: %.4lf\n", deus.res);
  }
}
