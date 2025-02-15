#include <stdio.h>

int main(){

    //Declarando as váriaveis
    int X,Y;

    //Coletando informações com o usúario
    printf("Informe o primeiro número: \n");
    scanf("%d", &X);
    printf("Informe o segundo númeoro: \n");
    scanf("%d", &Y);

    //Testando a condição se o primeiro número é maior que o segundo.
    printf("%d é maior que %d ?\n",X,Y);

    if (X > Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    printf("%d é menor que %d ?\n",X,Y);

    if (X < Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    printf("%d é maior ou igual a %d ?\n",X,Y);

    if (X >= Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    printf("%d é menor ou igual a %d ?\n",X,Y);

    if (X <= Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    printf("%d é igual a %d ?\n",X,Y);

    if (X == Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    printf("%d é diferente de %d ?\n",X,Y);

    if (X != Y)
    {
        printf("Sim. \n");
    }

    else printf("Não. \n");

    
    //printf("RESPOSTA:1 para verdadeiro e 0 para falso:%d \n", X > Y);

}