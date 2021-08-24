#include <stdio.h>

int main() {
  int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    
    for(int i = b ; i <= c ; i++) {

        if (i % a == 0)
            printf("%d ", i);
    }
    return 0;
}