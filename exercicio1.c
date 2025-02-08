#include <stdio.h>

int main (){

    char carta;
    char cidade [20];
    int codigocarta,populacao,pontosturisticos;
    float pib,area;

    printf("--- Super Trunfo Cidades | Cadastro das Cartas ---\n");
    printf("informe a letra da carta: \n");
    scanf("%c", &carta);
    printf("Informe o código da carta:(de 1 a 4): \n");
    scanf("%d", &codigocarta);
    printf("Informe a cidade: \n");
    scanf("%s", &cidade);
    printf("Informe a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao);
    printf("informe a área em km²: \n");
    scanf("%f", &area);
    printf("Informe o valor do PIB: \n");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("----------------------------------------------------------------------\n");
    printf("--- Super Trunfo Cidades | Carta cadastrada ---\n");
    printf("Carta: %c - Código %d\n",carta,codigocarta);



}