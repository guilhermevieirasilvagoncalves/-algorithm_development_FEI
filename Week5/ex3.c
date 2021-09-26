#include <stdio.h>

int main(){
    printf("Tamanho da matriz A:\n");
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    double matrizA[a][b];
    printf("Tamanho da matriz B:\n");
     scanf("%d %d", &c, &d);
    double matrizB[c][d];
    if(b == c){
        double M[a][d];
        printf("Matriz A:\n");
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                scanf("%lf", &matrizA[i][j]);
            }
        }
        printf("Matriz B:\n");
        for(int i = 0; i < c; i++){
            for(int j = 0; j < d; j++){
                scanf("%lf", &matrizB[i][j]);
            }
        }

        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                M[i][j] = 0;
            }
        }

        printf("Matriz AB:\n");

        for(int i = 0; i < b || i<a; i++){
            for(int j = 0; j < d; j++){
                for(int k = 0; k < c; k++){
                    M[i][j] += matrizA[i][k]*matrizB[k][j];
                }
            }
        }

        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                printf(" %3.4lf ", M[i][j]);
            }
        printf("\n");
        }
    }
    else{
      printf("Dados incorretos.\n");
    }
    return 0;
}