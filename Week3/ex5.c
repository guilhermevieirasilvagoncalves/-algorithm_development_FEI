#include <stdio.h>
#include <math.h>
float maiorRaiz (float a, float b, float c){
    float r1, r2, d, m;
    d=(b*b - 4*a*c);
    if(d <0){
        return 0;    
    }
    d = sqrt(d);
    r1 = (b*-1+d)/2*a;
    r2 = (b*-1-d)/2*a;
    if (d <0){
        return 0;
    }
    else if(r1>r2){
        m = r1;
    }
    else{
        m = r2;
    }
    return m;
}