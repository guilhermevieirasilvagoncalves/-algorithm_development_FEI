#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double modulo (double *v, int n)
{
    double soma = 0;
    int i;
    for (i = 0; i < n; i++)
        soma += v[i]*v[i];

    return sqrt (soma);
}

int main()
{
    int i = 0;
    int tam = 0;
    double mod = 0;

    scanf("%d", &tam);

    double Valores[tam];

    for (i = 0; i < tam; i++)
        scanf("%lf", &Valores[i]);

    mod = modulo(Valores, tam);

    printf("Modulo = %.4lf\n", mod );

    return 0;
}