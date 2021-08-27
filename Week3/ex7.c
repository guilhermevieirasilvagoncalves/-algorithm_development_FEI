#include <stdio.h>
#include <math.h> 
float dist2(float Px1, float Px2, float Py1, float Py2);
int main(){
 float x1, x2, y1, y2, resp;
 
 printf("Digite as coordenadas do 1o. ponto: \n");
 scanf("%f %f", &x1, &y1);

 printf("Digite as coordenadas do 2o. ponto: \n");  
 scanf("%f %f", &x2, &y2);

 resp = dist2(x1, x2, y1, y2);
 printf("Distancia entre os dois pontos: %f\n", resp);
 return 0;
}
float dist2(float Px1, float Px2, float Py1, float Py2){
 float a, b, c, d;
 a = Px1 - Px2; 
 b = Py1 - Py2; 
 c = a * a + b * b; 
 d = sqrt(c); 
 return d; 
}