#include <stdio.h>
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
   do
    {
        printf("\nn= ");
        scanf("%d", &n);
        if(n < 0) {
            printf("\nNhap sai !");
        }

    }while(n < 0);

    if ( n == 0 ) printf("S = 1 "); 
        else printf("S = %d", giaiThua(n));
    return 0;
}
 