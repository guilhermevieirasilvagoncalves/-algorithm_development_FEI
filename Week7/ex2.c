#include <stdio.h>
#include <stdlib.h>


double prodEsc (double *u, double *v, int n)
{
    double soma = 0;
    int i;
    for (i = 0; i < n; i++)
        soma += u[i]*v[i];

    return soma;
}

int main()
{
    int i = 0;
    int tam = 0;
    double presc = 0;

    scanf("%d", &tam);

    double x[tam];
    double y[tam];

    for (i = 0; i < tam; i++)
        scanf("%lf", &x[i]);

    for (i = 0; i < tam; i++)
        scanf("%lf", &y[i]);

    presc = prodEsc(x, y, tam);

    printf("Produto Escalar = %.4lf\n", presc);

    return 0;
}