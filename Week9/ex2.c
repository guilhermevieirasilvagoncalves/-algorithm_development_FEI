#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x, y, z;

      
    FILE *arq;
    
    arq = fopen("quadradoR.txt", "r");
    if(arq == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }
    
    else{
         while( (fscanf(arq,"%f %f \n", &x, &y))!=EOF ){
             z=(x*x)+(y*y);
             printf("%.4lf %.4lf %.4lf\n", x, y, z);
         }
         
         
    }
       
    
    
    
    fclose(arq);
    
    return 0;
}