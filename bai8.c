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

    for(float i = 0.0; i <= n; i++)
    {
        S += (float) ((2*i +1) / (2 * i + 2));
    }
    printf("\nTong la: %.5f", S);
    getch();
    return 0;
}