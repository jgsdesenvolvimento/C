#include <stdio.h>

// Agora você aplicará os conceitos estudados no nível intermediário criando um programa em C 
// que calcula a média de três notas inseridas pelo usuário. Utilizaremos variáveis para armazenar
// as notas, operadores matemáticos para somar e calcular a média, e operadores de atribuição para atualizar

int main(){

        //Definindo as variaveis do programa
        float N1,N2,N3,N4;
        float Media;
        char Aluno[20];

        //Solicitando ao usuário a entrada dos dados
        printf("Informe o nome do Aluno: \n");
        scanf("%s",&Aluno);
        printf("Informe a nota da diciplina Ciências da Natureza e suas Tecnologias: \n");
        scanf("%f",&N1);
        printf("Informe a nota da diciplina Ciências Humanas e Sociais Aplicadas: \n");
        scanf("%f",&N2);
        printf("Informe a nota da diciplina Linguagens e suas Tecnologias: \n");
        scanf("%f",&N3);
        printf("Informe a nota da diciplina Matemática e suas Tecnologias: \n");
        scanf("%f",&N4);

        //Calculo da Média

        Media = (N1 + N2 + N3 + N4) / 4;

        //Exibindo a Média do aluno
        printf("*** --- Registro de Alunos --- ***\n\n");
        printf("Aluno: %s -- Média: %.2f \n",Aluno,Media);
        printf("--- Notas por diciplina --- \n");
        printf("Ciências da Natureza e suas Tecnologias: %.2f \n",N1);
        printf("Ciências Humanas e Sociais Aplicadas: %.2f \n",N2);
        printf("Linguagens e suas Tecnologias: %.2f \n",N3);
        printf("Matemática e suas Tecnologias: %.2f \n",N4);

return 0;
}