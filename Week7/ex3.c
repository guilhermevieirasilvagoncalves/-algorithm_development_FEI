#include <stdio.h>
#include <math.h>

#define M_PI  3.141592653589  /* pi */


double arccos (double y)
{
    double val, res;
    val = 180.0 / M_PI;
    res = acos(y) * val;
    return res;
}

int main () {
   double x;

   do
   {
       printf("Digite o valor do arccos: \n");
       scanf("%lf", &x);
   }
   while (x < -1 || x > 1);


   printf("O arccos de %.4lf eh %.4lf graus.\n", x, arccos(x));

   return 0;
}