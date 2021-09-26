#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI  3.14159265358979323846

int main(){
    int n; 
    scanf("%d",&n);
    double vetx[n],vety[n];
    if(n==2){
        for(int i=0;i<n;i++){
            scanf("%lf",&vetx[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%lf",&vety[i]);
        }
        double pe,mx,my,mt,total;
        pe = (vetx[0]*vety[0])+(vetx[1]*vety[1]);
        mx = sqrt((pow(vetx[0],2)+pow(vetx[1],2)));
        my = sqrt((pow(vety[0],2)+pow(vety[1],2)));
        mt = mx * my;
        total = pe/mt;
        printf("Angulo entre os vetores: %.4lf graus.",acos(total)*(180/M_PI));
    }
    else{
        for(int i=0; i<n;i++){
            scanf("%lf",&vetx[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%lf",&vety[i]);
        }
        double pe2,mx2,my2,mt2,total2;
        pe2 = (vetx[0]*vety[0])+(vetx[1]*vety[1])+(vetx[2]*vety[2]);
        mx2 = sqrt((pow(vetx[0],2)+pow(vetx[1],2)+pow(vetx[2],2)));
        my2 = sqrt((pow(vety[0],2)+pow(vety[1],2)+pow(vety[2],2)));
        mt2 = mx2 * my2;
        total2 = pe2 / mt2;
        printf("Angulo entre os vetores: %.4lf graus.",acos(total2)*(180/M_PI));
        
    }

}