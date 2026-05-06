#include<stdio.h>
#include<stdlib.h>

int main()
{
    int conceito;
    int nota;
    
    printf("conceitue de 0 a 100: "); 
    scanf("%d", &conceito);
    
    nota = (conceito / 10);
    
    switch (nota) {
    
    case 10: printf("A+");
    break;
    
    case 9: printf("A");
    break;
    
    case 8: printf("B");
    break;
    
    case 7: printf("C");
    break;
   
    case 6: printf("D");
    break;
    
    default:
        printf("F");
        break;
    }    
   
    return 0;
}
