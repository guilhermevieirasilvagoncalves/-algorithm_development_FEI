#include<stdio.h>

int main()
{
int numero1, numero2, numero3, troca;

     scanf("%d", &numero1);
     scanf("%d",&numero2);
     scanf ("%d", &numero3);

    if( numero1 > numero2 ){
        troca = numero2;
        numero2 = numero1; 
        numero1 = troca;
    }
    if( numero2 > numero3 ){
        troca = numero3; 
        numero3 = numero2;
        numero2 = troca;
    }
    if( numero1 > numero2){
        troca = numero2;
        numero2 = numero1;
        numero1 = troca;
    }
    printf("%d %d %d",numero1,numero2,numero3);
}