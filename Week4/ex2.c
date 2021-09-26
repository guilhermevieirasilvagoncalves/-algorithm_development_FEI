#include <stdio.h>
    int main()
    {
      int n,i,j;
      scanf("%d",&n);
      j=n;
      int vetor[n], vet[n];

      for(i=0;i<n;i++)
      {
        scanf("%d",&vetor[i]);
      }

      for(i=0;i<n;i++)
      {
        vet[i]=vetor[j-1];
        j--;

      }
     
      for(i=0;i<n;i++)
      {
        printf("%d ",vet[i]);
      }
      return 0;
    }