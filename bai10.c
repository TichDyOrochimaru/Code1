#include<stdio.h>
#include <math.h>
int main()
{
  float x, z;
  int n;
  printf("x =  ");
  scanf("%f", &x);
  printf("n =  ");
  scanf("%d", &n);
  z = pow(x, n);
  printf("%.2f^%d = %.2f",x,n, z);
  return 0;
}