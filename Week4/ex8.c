#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int size;
    scanf("%d",&size);
    double x[size], y [size], menorx, menory, maiorx, maiory, maiordist, menordist1, menordist2, menordist3, menordist0;
    
    for ( int i=0; i<size; i++){
        scanf("%lf",&x[i]);
    }
    for ( int i=0; i<size; i++){
        scanf("%lf",&y[i]);
    }
  
  
 

    if (x[0]< x[1] && x[2]){
        menorx = x[0];
    }
    if(x[1]< x[0] && x[2]){
        menorx = x[1];
    }
    if(x[2]< x[0] && x[1]){
        menorx= x[2];
    }

    if (y[0]< y[1] && y[2]){
        menory = y[0]  ;
    }
    if (y[1]< y[0] && y[2]){
        menory = y[1] ;
    }
    if (y[2]< y[0] && y[1]){
        menory = y[2];
    }
    
    if (x[0]> x[1] && x[2]){
        maiorx = x[0];
    };
    if (x[1] > x[0] && x[2]){
        maiorx = x[1];
    };
    if (x[2]> x[0]&& x[2]){
        maiorx = x[2];
    };
    
    if (y[0] > y[1] && y[2]){
        maiory = y[0];
    }
    if (y[1] > y[0] && y[2]){
        maiory = y[1];
    }
    if (y[2] > y[1] && y[0]){
        maiory = y[2];
    }
    
    if ( maiory > maiorx ){
    maiordist = maiory - menorx;
    }
    else{
    maiordist = maiorx + fabs(menory);
    }
    

     if (fabs(y[0]-x[0]) < fabs(y[0]-x[1])&& fabs(y[0]-x[2])){
        menordist1 = fabs(y[0]-x[0]);
    }
    if (fabs(y[0]-x[1]) < fabs(y[0]-x[0]) && fabs(y[0] - x[2])){
        menordist1 = fabs(y[0] - x[1]);
    }
    if (fabs(y[0]-x[2]) < fabs(y[0]-x[0]) && fabs(y[0] - x[1])){
        menordist1 = fabs(y[0]-x[2]);
    }
   
    if (fabs(y[1]-x[0]) < fabs(y[1]-x[1])&& fabs(y[1]-x[2])){
        menordist2 = fabs(y[1]-x[0]);
    }
    if (fabs(y[1]-x[1]) < fabs(y[1]-x[0]) && fabs(y[1] - x[2])){
        menordist2 = fabs(y[1] - x[1]);
    }
    if (fabs(y[1]-x[2]) < fabs(y[1]-x[0]) && fabs(y[1] -x[1])){
        menordist2 = fabs(y[1]-x[2]);
    }

    if (fabs(y[2]-x[0]) < fabs(y[2]-x[1])&& fabs(y[2]-x[2])){
        menordist3 = fabs(y[2]-x[0]);
    }
    if (fabs(y[2]-x[1]) < fabs(y[2]-x[0]) && fabs(y[2] - x[2])){
        menordist3 = fabs(y[1] - x[1]);
    }
    if (fabs(y[2]-x[2]) < fabs(y[2]-x[0]) && fabs(y[2] - x[1])){
        menordist3 = fabs(y[2]-x[2]);
    }

    if (menordist1 < menordist2 && menordist3){
        menordist0 = menordist1;
    }
    if(menordist2< menordist1 && menordist3){
        menordist0 = menordist2;
    }
    if(menordist3< menordist1 && menordist2){
        menordist0 = menordist3;
    }
    
    printf("Menor Distancia: %.2lf\n",menordist0);
    printf("Maior Distancia: %.2lf",maiordist);
    
}