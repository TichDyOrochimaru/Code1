#include <stdio.h> 
#include <conio.h>
int main(){
    int i, n;
    float S;
    S = 0; 
    i = 1;
    do
    {
        printf("\nn: ");
        scanf("%d", &n);
        if(n < 1) {
            printf("\nNhap sai !");
        }

    }while(n < 1);

    while(i <= n)
    {
        S += 1.0 / i;  
        i++;
    }
    printf("\nS = %f", S);
    printf("\nS = %.2f ", S);
    getch();
    return 0;
}