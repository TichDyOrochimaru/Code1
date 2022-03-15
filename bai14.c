#include<stdio.h>
#include <math.h>
int main()
{
  float x, z;
  int n;
  long S;
  printf("x =  ");
  scanf("%f", &x);
  printf("n =  ");
  scanf("%d", &n);
  for ( int i=0; i<=n ; i++ )
  S += pow(x, 2*i + 1);
  printf("S  = %ld",S);
  return 0;
}