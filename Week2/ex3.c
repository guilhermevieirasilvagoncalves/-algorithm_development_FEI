#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1, n2, n3, n4;
  scanf("%d%d%d%d", &n1,&n2,&n3,&n4);

  if(n1<n2 && n2<n3 && n3<n4){
    printf("%d %d %d %d", n1, n2, n3, n4);}
    else if(n1<n2 && n2<n4 && n2<n3){
    printf("%d %d %d %d", n1, n2, n4, n3);}
    else if(n1<n3 && n3<n2 && n2<n4){
    printf("%d %d %d %d", n1, n3, n2, n4);}
    else if(n1<n3 && n3<n4 && n4<n2){
    printf("%d %d %d %d", n1, n3, n4, n2);}
    else if(n1<n4 && n4<n2 && n2<n3){
    printf("%d %d %d %d", n1, n4, n2, n3);}
    else if(n1<n4 && n4<n3 && n3<n2){
    printf("%d %d %d %d", n1, n4, n3, n2);}
  
    else if(n2<n1 && n1<n3 && n3<n4){
    printf("%d %d %d %d", n2, n1, n3, n4);}
    else if(n2<n1 && n1<n4 && n4<n3){
    printf("%d %d %d %d", n2, n1, n4, n3);}
    else if(n2<n3 && n3<n1 && n1<n4){
    printf("%d %d %d %d", n2, n3, n1, n4);}
    else if(n2<n3 && n3<n4 && n4<n1){
    printf("%d %d %d %d", n2, n3, n4, n1);}
    else if(n2<n4 && n4<n1 && n1<n3){
    printf("%d %d %d %d", n2, n4, n1, n3);}
    else if(n2<n4 && n4<n3 && n3<n1){
    printf("%d %d %d %d", n2, n4 ,n3, n1);}

    else if(n3<n1 && n1<n2 && n2<n4){
    printf("%d %d %d %d", n3, n1, n2, n4);}
    else if(n3<n1 && n1<n4 && n4<n2){
    printf("%d %d %d %d", n3, n1, n4, n2);}
    else if(n3<n2 && n2<n1 && n1<n4){
    printf("%d %d %d %d", n3, n2, n1, n4);}
    else if(n3<n2 && n2<n4 && n4<n1){
    printf("%d %d %d %d", n3, n2, n4, n1);}
    else if(n3<n4 && n4<n1 && n1<n2){
    printf("%d %d %d %d", n3, n4, n1, n2);}
    else if(n3<n4 && n4<n2 && n2<n1){
    printf("%d %d %d %d", n3, n4, n2, n1);}

    else if(n4<n1 && n1<n2 && n2<n3){
    printf("%d %d %d %d", n4, n1, n2, n3);}
    else if(n4<n1 && n1<n3 && n3<n2){
    printf("%d %d %d %d", n4, n1, n3, n2);}
    else if(n4<n2 && n2<n1 && n1<n3){
    printf("%d %d %d %d", n4, n2, n1, n3);}
    else if(n4<n2 && n2<n3 && n3<n1){
    printf("%d %d %d %d", n4, n2, n3, n1);}
    else if(n4<n3 && n3<n1 && n1<n2){
    printf("%d %d %d %d", n4, n3, n1, n2);}
    else if(n4<n3 && n3<n2 && n2<n1){
    printf("%d %d %d %d", n4, n3, n2, n1);}
}