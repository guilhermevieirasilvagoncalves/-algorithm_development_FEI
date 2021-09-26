#include <stdio.h>

int main(){
    printf("Tamanho da matriz A:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    int matriz[a][b];
    int valor;
    if(a>0 && b<= 4){
      printf("Matriz A:\n");
        for(int x = 0; x < a; x++){
            for(int y = 0; y < b; y++){
                scanf("%d", &valor);
                matriz[x][y] = valor;
            }
        }
        printf("Digite o vetor com %d coordenadas:\n", b);
        double v[b], v2[a];
        for(int i = 0; i < b; i++){
            scanf("%d", &valor);
            v[i] = valor;
        }
        double mult= 0, soma = 0;
        printf("Produto de A por v:\n");
        for(int i = 0; i < a; i++){
            soma = 0;
            for(int j = 0; j < b; j++){
                mult = v[j]*matriz[i][j];
                soma = soma + mult;
                v2[i] = soma;
            }
        }
        for(int i = 0; i < a; i++){
            printf("%.4lf\n", v2[i]); 
        }
    }
    return 0;
}