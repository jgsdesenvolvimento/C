#include<stdio.h>

//Manipulação e conversão de tipos de dados em C

int main(){

    int A = 10;
    float B = 3.5;
    int C = 3;

    /*  -- Conversão Implicita: Ocore automaticamente quando se mistura diferentes tipos de dados
    em uma mesma expressão.*/

    float Resultado = A + B;
    printf("O resultado da conversão implicita de  %d + %.2f é: %.2f \n",A,B,Resultado);

    /*  -- Conversão Explicita: Ocore quando você força a conversão do tipo de dados na expressão usando o operador (Casting).*/

    float quociente = (float) A / C; // a variável A é explicitamento convertida para Float.
    printf("O resultado da conversão explicita de %d / por %d é de: %.2f \n",A,C,quociente);

return 0;
}
