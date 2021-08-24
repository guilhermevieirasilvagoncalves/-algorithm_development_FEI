#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
  int n1,n2,n3,n4,resto,numeroantigo,novonumero;

  scanf("%d",&numeroantigo);

	n3 = numeroantigo % 10;
	resto = numeroantigo / 10;
	n2 = resto % 10;
	resto = resto / 10;
	n1 = resto % 10;
	resto = n1 + ( n2 * 3 ) + ( n3 * 5 );
	n4 = resto % 7;
	novonumero = numeroantigo * 10 + n4;

	printf("%d",novonumero);
	
}