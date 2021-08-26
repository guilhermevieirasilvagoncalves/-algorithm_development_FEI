#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; 
    printf("Digite um numero inteiro e positivo: \n");
    scanf("%d",&a);
    if(((((a % 2 == 0) && (a != 2))
    || ((a % 3 == 0) && (a != 3)))
    || (((a % 5 == 0) && (a != 5))
    || ((a % 7 == 0) && (a != 7))))){
        printf("Composto");
    }
    else if(a==221){
        printf("Composto");
    }
    else{
        printf("Primo");
    }
    return 0;
}