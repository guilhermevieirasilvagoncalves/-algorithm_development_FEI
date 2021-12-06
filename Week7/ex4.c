#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI  3.141592653589  /* pi */

double modulo (double *v, int n)
{
    double soma = 0;
    int i;
    for (i = 0; i < n; i++)
        soma += v[i]*v[i];

    return sqrt (soma);
}


double prodEsc (double *u, double *v, int n)
{
    double soma = 0;
    int i;
    for (i = 0; i < n; i++)
        soma += u[i]*v[i];

    return soma;
}

double arccos (double y)
{
    double val, res;
    val = 180.0 / M_PI;
    res = acos(y) * val;
    return res;
}

int main()
{
    int i = 0, tam = 0;
    double presc = 0.0;

    scanf("%d", &tam);

    double x[tam];
    double y[tam];
    double modx = 0.0, mody = 0.0, valor = 0.0;

    for (i = 0; i < tam; i++)
        scanf("%lf", &x[i]);

    for (i = 0; i < tam; i++)
        scanf("%lf", &y[i]);

    presc = prodEsc(x, y, tam);

    modx = modulo(x, tam);

    mody = modulo(y, tam);

    valor = presc/modx/mody;

    printf("Angulo entre os vetores: %.4lf graus.\n", arccos(valor));

    return 0;
}