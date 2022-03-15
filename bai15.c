#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S, tmp;
    i = 1;
    S = 0;
    tmp = 0;
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
        S += (float) 1.0 / tmp;
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}