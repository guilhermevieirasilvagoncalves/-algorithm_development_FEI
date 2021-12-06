#include <stdio.h>
#include <math.h>

double Pot(double x, int n, double total){
  if(n != 0){
    total = total*x;
    if (n < 0){
      return Pot(x, n+1, total);
    }
    else{
      return Pot(x, n-1, total);
    }
  }
  else{
    return total;
  }
}

int main(void) {
  double x = 0, t = 1;
  double n = 0;
  scanf("%lf %lf", &x, &n);
  double rec = Pot(x, n, t);
  if(n < 0){
    rec = 1/rec;
  }
  printf("%.4lf", rec);
  return 0;
}