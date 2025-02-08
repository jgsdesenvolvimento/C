#include <stdio.h>

int main(){

    int Nota1, Nota2, Nota3;
    int Media;

    printf("Informe a primeira nota: \n");
    scanf("%d", &Nota1);
    printf("Informe a segunda nota: \n");
    scanf("%d", &Nota2);
    printf("Informe a terceira nota: \n");
    scanf("%d", &Nota3);

    Media = (Nota1 + Nota2 + Nota3) / 3;

    printf("A média das notas são: %d \n",Media);

return 0;

}