#include<stdio.h>

//Manipulação e conversão de tipos de dados em C

/*  -- Conversão Implicita: Ocore automaticamente quando se mistura diferentes tipos de dados
    em uma mesma expressão.*/

int main(){

    int A = 10;
    float B = 3.5;
    float Resultado = A + B;

    printf("O resultado da conversão implicita de  %d + %.2f é: %.2f \n",A,B,Resultado);

return 0;
}
