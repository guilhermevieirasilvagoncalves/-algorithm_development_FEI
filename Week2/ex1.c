#include <stdio.h>
#include <stdlib.h>
int main(){
  int num1, num2;
  scanf("%d%d",&num1,&num2);
if (num1 > num2)
  printf("%d %d",num2, num1);
else
  printf("%d %d",num1,num2);
}