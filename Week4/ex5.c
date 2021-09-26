#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define M_PI  3.14159265358979323846 

int main(){
    double num, resultado; 
    printf("Digite o angulo em radianos:\n");
    scanf("%lf",&num);
    resultado = (num * 180) / M_PI;
    printf("O angulo de %lf radianos equivale a %.4lf graus.",num,resultado);
}
