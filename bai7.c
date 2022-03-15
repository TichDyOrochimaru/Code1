#include <stdio.h> 
#include <conio.h>
int main(){
    int i, n;
    float S;
    S = 0; 
    do
    {
        printf("\nn: ");
        scanf("%d", &n);
        if(n < 1) {
            printf("\nNhap sai !");
        }

    }while(n < 1);

    for(float i = 1.0; i <= n; i++)
    {
        S += (float)(i / (i + 1));
    }
    printf("\nTong la: %.5f", S);
    getch();
    return 0;
}