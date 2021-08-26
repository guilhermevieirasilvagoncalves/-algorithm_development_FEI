#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
    double num, resultado; 
    printf("Digite o angulo em radianos:\n");
    scanf("%lf",&num);
    resultado = (num * 180) / PI;
    printf("O angulo de %lf radianos equivale a %lf graus.",num,resultado);
}