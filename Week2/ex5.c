#include <stdio.h>

int main(){

    int numero;
    scanf("%d",&numero);

    while(numero != 0){
        if (numero < 0){
            numero *= -1;
        }
        printf("%i", numero % 10);
        numero /= 10;

    }

    return 0;

}