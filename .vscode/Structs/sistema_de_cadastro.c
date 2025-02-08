#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    float Price;
    int Quantity;
}Product;

typedef struct {
    int Id;
    Product Products[99];
    float Total;
}Order;


int main(){

    int status = 1, id = 0, c;
    Order orders[99];

    while (status) {
        printf("*** ---- Sistema de Cadastro ---- ***\n\n");
        printf("Escolha uma opção:\n");
        printf("1 - Comprar\n");
        printf("2 - Carrinho de Compras\n");
        printf("3 - Sair\n");
        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                //Comando para limpar a tela
                printf("\e[1;1H\e[2J");

                orders[id] .Id = id; // O valor do pedido atual é igual  valor de id.
                printf("Order ID: %d \n",id + 1);
                float total = 0;

                for (int i = 0; i < 99; i++){

                    while ((c = getchar()) != '\n' && c != EOF);//tratamento dos espaços da string com o metodo Fgets
                    
                    printf("Digite o nome do produto: ");
                    char name[50];
                    fgets(name, sizeof(name), stdin);

                    printf("Digite o valor do produto: ");
                    float price;
                    scanf("%f", &price);

                    printf("Digite a quantidade do produto: ");
                    int quantity;
                    scanf("%d", &quantity);

                    Product Product = {.Price = price, .Quantity = quantity};
                    strcpy(Product.Name, name);

                    orders[id].Products[i] = Product;

                    total += price * quantity; // Total recebe ele mesmo + preço vezes quantidade.

                    printf("Deseja adicionar outro produto? [s/n] \n");
                    char newProduct;
                    scanf(" %c", &newProduct);

                    if(newProduct != 's'){
                        break;
                    }
                }
                orders[id].Total = total;
                id++;//incrementando o valor do ID em mais 1.
                break;
            case 2:

                //Comando para limpar a tela
                printf("\e[1;1H\e[2J");

                for (int i = 0; i < id; i++){
                    printf("Order ID: %d \n", i + 1);

                    for (int j = 0; j < 99; i++){
                        printf("Produto #%d \n", j + 1);

                        printf("Descrição: %s\n\n", orders[i].Products[j].Name);
                        printf("Valor: %.2f\n\n", orders[i].Products[j].Price);
                        printf("Quantidade: %d\n\n", orders[i].Products[j].Quantity);

                        if(orders[i].Products[j + 1].Quantity == 0){
                            break;
                        }
                    }
                    printf("Total do pedido: %.2f \n", orders[i].Total);
                }
                printf("Precione qualquer tecla para continuar...");
                while ((c = getchar()) != '\n' && c != EOF);
                getchar();
                break;
            case 3:
                status = 0;
                break;
            
        }
    }
    

    return 0;
}