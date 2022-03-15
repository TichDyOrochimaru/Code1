#include<stdio.h>
#include <conio.h>
int main (){
    int i,n; 
    long S; 
    S = 0;
    i = 1;
    printf("\n n: ");
    scanf("%d", &n);
    while(i <= n)
    {
        S += i * i;
        i++;
    }
    printf("\nS = %ld", S);
    getch();
    return 0;
}