#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
   int horas,minutos,segundos,numero, resto;
   scanf("%d",&numero);
if (numero>3600){
    horas = numero/3600;
    resto = numero%3600;
    minutos = resto/60;
    segundos = resto%60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
}
else {
    minutos = numero/60;
    segundos = numero%60;
    printf("%d:%d:%d\n",0,minutos,segundos);
}
return 0;
}