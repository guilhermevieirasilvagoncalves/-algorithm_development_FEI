#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    float nota1, nota2, nota3, calmedia;
    scanf("%f%f%f",&nota1, &nota2, &nota3);
    calmedia = (nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5);
    printf("MEDIA = %.1f", calmedia);
}