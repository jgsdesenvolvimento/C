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


    return 0;
}