#include <stdio.h>
    int main()
    {
      int n;
      scanf("%d",&n);
      double vet;
      for(int i=0;i<n;i++)
      {
        double valor;
        scanf("%lf",&valor);
        vet += valor;
      }
      double media = vet/n;
      printf("%.2lf",media);
      return 0;
    }