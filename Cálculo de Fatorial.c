#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, fatorial= 1;
    
    do{
    printf("Digite um número inteiro e nao negativo: ");
    scanf("%d", &n);
    }while(n < 0);
    //executa o bloco enquanto n for menor que 0.
    
    for (int i = 1 ; i <= n; i++){
        // O I de controle inicia em 1, com a condicao de <= N.
        if (n == 0){
        printf("0! = 1");
       break;
       // se N for igual a 0 ele executa o fatorial de 0.
    }
    
    
     fatorial *=i;
     // aqui o fatorial ea multiplicação dos elementos do loop.
    }    
    printf("%d! eh igual a %d", n, fatorial);
    return 0;

}