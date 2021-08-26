#include <stdio.h>
#include <math.h>
float prodEsc(float x1, float x2, float x3, float y1, float y2, float y3){
    float d;
    d=x1*y1 + x2*y2 + x3*y3;
    return d;
}
int main(){
    float x1, x2, x3, y1, y2, y3, resto;
    printf("Digite as coordenadas do 1o vetor:\n");
    scanf("%f%f%f", &x1, &x2, &x3);
    printf("Digite as coordenadas do 2o vetor:\n");
    scanf("%f%f%f", &y1, &y2, &y3);
    resto=prodEsc(x1, x2, x3, y1, y2, y3);
    printf("Produto Escalar: %f", resto);
}