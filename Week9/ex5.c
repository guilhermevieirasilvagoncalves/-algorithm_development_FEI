#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fr = fopen("empresaR.txt","r");
  char nome[20], genero[20];
  int idade;
  int total25 = 0, totalFeminino = 0, total = 0;

  while((fscanf(fr,"%s %s %d\n", nome,genero, &idade)) != EOF){
    total++;
  }

  printf("Total de funcionarios: %d\n\n", total);
  fclose(fr);
  fr = fopen("empresaR.txt","r");
  while((fscanf(fr,"%s %s %d\n", nome,genero, &idade)) != EOF ){
    if (idade>=25){
      printf("Nome do funcionario +25: %s idade: %d\n", nome, idade);
      total25++;
    }
    if(genero[0] != 'm'){
      totalFeminino++;
    }
  }

  printf("\nTotal de funcionarios +25: %d\n\n", total25);
  printf("Total de funcionarias: %d", totalFeminino);
  fclose(fr);
}