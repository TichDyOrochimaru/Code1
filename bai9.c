#include <stdio.h> 
#include <conio.h>
int main(){
    int i, n;
    long S;
    S = 1; 
    do
    {
        printf("\nn: ");
        scanf("%d", &n);
        if(n < 1) {
            printf("\nNhap sai !");
        }

    }while(n < 1);

    for(int i = 1; i <= n; i++)
    {
        S *=i;
    }
    printf("\nTong la: %ld", S);
    getch();
    return 0;
}