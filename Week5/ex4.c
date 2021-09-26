#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main(void){
    double A[2][2];
    char v1[TAM];
    int u[TAM];
    int v[TAM];
    int i;
    int j;
    int k;
    int t;
    int linA = 2, colA = 2;
    int n ;

    printf("Mensagem:\n");
    fgets(v1, TAM, stdin);


    for(n=0; v1[n] != '\n'; n++)
    {
      u[n] = v1[n];
    }
  
    if (n % 2 != 0)
    {
        u[n] = 32;
        n++;
    }


    printf("Matriz A:\n");
    for (i = 0; i < linA; i++)
    {
       for (j = 0; j < colA; j++)
           scanf("%lf", &A[i][j]);
    }

    printf("Tamanho da mensagem: %d\n", n);

    printf("Mensagem Cifrada:\n");
    for (t = 0; t < n/2; t++)
    {
        for (i = 0; i < linA; i++)
        {
          v[2*t + i] = 0;
          for (k = 0; k < colA; k++)
            v[2*t + i] += A[i][k]*u[2*t + k];
         printf("%d\n",v[2*t + i]);
        }

    }

    return 0;
}