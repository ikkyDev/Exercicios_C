#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tC;
    int tF;
    
    printf("Digite a temperatura em Celsius:");
    scanf("%d",&tC);
    
    tF = (tC * 9.0 / 5)+ 32;
    
    printf("%.2f", tF);
    
    return 0;
}
