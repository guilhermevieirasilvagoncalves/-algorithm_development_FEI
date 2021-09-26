#include <stdio.h>
#include <stdlib.h>

int indiceMaior (double v[], int n)
{
    double maior = v[0];    /* Primeiro elemento */
    int indMa = 0;
    int i;
    for (i = 0; i < n; i++)        /* Varia de 1 a n-1 */
        if (v[i] > maior)
        {
            maior = v[i];          /* Determina maior */
            indMa = i;             /* Índice do maior */
        }


    return indMa;
}

int main()
{
    int i = 0;
    int tam = 0;

    scanf("%d", &tam);

    double Taxas[tam];

    for (i = 0; i < tam; i++)
    {
        scanf("%lf", &Taxas[i]);
    }

    printf("%d\n", indiceMaior(Taxas, tam));

    return 0;
}


