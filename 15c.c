#include <stdio.h> 
int main(void){
  int a=3, b=4;
  double res = 0.75;

  printf("||-----|-----|-----|-----||\n");
  printf("|| act | one | two | res ||\n");
  printf("||=====+=====+=====+=====||\n");
  printf("||%5c|%-5d|%-5d|%.5d||\n",'+',a,b,a+b);
  printf("||%5c|%5d|%5d|%.4d||\n",'-',a,b,a-b);
  printf("||%5c|%5d|%-5d|%.5d||\n",'*',a,b,a*b);
  printf("||%-5c|%-5d|%5d|%.3f||\n",'/',a,b,res);
  printf("===========================\n");

  return(0);
}