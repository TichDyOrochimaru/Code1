#include <stdio.h>
int giaiThua(int n)
{
    if ((n == 0)||(n==1))
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    long S;
   do
    {
        printf("\nn= ");
        scanf("%d", &n);
        if(n < 0) {
            printf("\nNhap sai !");
        }

    }while(n < 0);
    S =0;
    for(int i = 1; i <= n; i++)
    {
        S += giaiThua(i);
    }

    printf("S = %ld", S);
    return 0;
}
 