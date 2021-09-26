#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
   double x01,x02,x03,y1,y2,y3,x1,x2,x3;
   scanf("%lf%lf%lf",&x01,&x02,&x03);
   scanf("%lf%lf%lf",&y1,&y2,&y3);
   
   x1 = x02*y3 - x03*y2;
   x2 = x03*y1 - x01*y3;
   x3 = x01*y2 - x02*y1;
   
   
   printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)\n", x1, x2, x3); 
}

