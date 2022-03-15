#include<stdio.h>
#include<math.h>

int main()
{
    int i, n,x;
    float S, tmp;
    i = 1;
    S = 0;
    tmp = 0;
    printf("\nNhap x: ");
    scanf("%d", &x);
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
      if(n < 1)
       {
        printf("\nNhap sai !");
       }
    }while(n < 1);

    while(i <= n)
    {
        tmp += i;
        S += (float) (pow(x,i)) / tmp;
        i++;
    }
    printf("\nTong la %f", S);
    getch();
    return 0;
}