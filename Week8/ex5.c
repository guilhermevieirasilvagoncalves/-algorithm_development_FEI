/*
Guilherme Vieira Silva Gonçalves
22121025-5
Exercício 5
*/
# include <stdio.h>
# include <stdlib.h>
typedef struct aluno aluno;
struct aluno{
    char nome[30];
    float media;
    int faltas;
};
int main()
{
  int quant;
  struct aluno *v;
  printf("Digite a quantidade de alunos: \n");
  scanf("%d", &quant);
  int vi[quant];
  v = malloc(quant*sizeof(int));
  for(int i = 0; i < quant; i++){
    printf("Digite as informações do aluno %d\n", (i+1));
    printf("Nome: \n");
    scanf("%s", v[i].nome);
    printf("\nMédia: \n");
    scanf("%f", &v[i].media);
    printf("\nFaltas: \n");
    scanf("%d", &v[i].faltas);
  }
  for(int i = 0; i < quant; i++)
  {
    vi[i] = v[i].media;
  }
  for (int i = 0; i < quant; ++i) 
        {
            for (int j = i + 1; j < quant; ++j) 
            {
                if (vi[i] < vi[j]) 
                {
                    int a = vi[i];
                    vi[i] = vi[j];
                    vi[j] = a;
                }
            }
        }
  for(int i = 0; i < quant; i++)
  {
    for(int j = 0; j < quant; j++)
    {
        if(vi[i] == v[j].media){
        printf("\nNome: %s\n", v[j].nome);
        printf("\nMédia: %.2f\n", v[j].media);
        printf("\nFaltas: %d\n", v[j].faltas);
        break;
    }
  }
  }
  free(v);
}