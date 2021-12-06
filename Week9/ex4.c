#include <stdio.h>
#include <stdlib.h>

int main(){
    float x[3], y[3], z[3];
    float valor, prodMisto;

      
    FILE *arq;
    
    arq = fopen("prodMistoR.txt", "r");
    if(arq == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
        exit(1);
    }
    
    else{
         while( (fscanf(arq,"%f %f %f\n%f %f %f\n%f %f %f", 
                            &x[0], &y[0], &z[0],
                            &x[1], &y[1], &z[1],
                            &x[2], &y[2], &z[2]))!=EOF ){
            //Produto misto
            prodMisto=(x[0]*y[1]*z[2])+(x[1]*y[2]*z[0])+(x[2]*y[0]*z[1])-(x[1]*y[0]*z[2])-(x[0]*y[2]*z[1])-(x[2]*y[1]*z[0]);

            //printa u, v e w
            printf("x = (%.4f, %.4f, %.4f)\n", x[0], x[1], x[2]);
            printf("y = (%.4f, %.4f, %.4f)\n", y[0], y[1], y[2]);
            printf("z = (%.4f, %.4f, %.4f)\n", z[0], z[1], z[2]);
            if(prodMisto>0){
                printf("Volume: %.4f\n", prodMisto);
            }
            else if(prodMisto<0){
                valor = prodMisto*(-1);
                printf("Volume: %.4f\n", valor);
            }
            
         }
         
         
    }
    
    fclose(arq);
    
    return 0;
}