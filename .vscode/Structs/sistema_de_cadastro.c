#include <stdio.h>

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
    int status = 1;
    while (status) {
        printf("Choose an option:\n");
        printf("-- Cadastro : 1\n");
        printf("-- Listar Pedidos : 2\n");
        printf("-- Encerrar : 3 \n");
        int option;
        scanf("%d", &option);

        
    }
    

    return 0;
}