/*
O cardápio de uma lanchonete é o seguinte: 



Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por
aquele lanche. Considere que a cada execução somente será calculado um item.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int pedido, x;
    float valorT, valorP;

    printf("O que deseja do cardapio? ");
    scanf("%d", &pedido);
    while (getchar() != '\n');

    switch (pedido){
        case 100:
            printf("Voce deseja o Cachorro Quente R$10,10; \nQuantos? ");
            scanf("%d", &x);
            valorP = 10.10;
            break;
        case 101:
            printf("Voce deseja o Bauru Simples R$8,30; \nQuantos? ");
            scanf("%d", &x);
            valorP = 8.30;
            break;
        case 102:
            printf("Voce deseja o Bauru c/Ovo R$8,50; \nQuantos? ");
            scanf("%d", &x);
            valorP = 8.50;
            break;
        case 103:
            printf("Voce deseja o Hamburguer R$12,50; \nQuantos? ");
            scanf("%d", &x);
            valorP = 12.50;
            break;
        case 104:
            printf("Voce deseja o Cheeseburguer R$13,25; \nQuantos? ");
            scanf("%d", &x);
            valorP = 13.25;
            break;
        default:
            printf("Pedido inexistente;");
            break;
    }

    valorT = (float)valorP * (float)x;
    if(pedido >= 100 && pedido <= 104){
        printf("\nDo cardapio voce pediu %x do pedido %d. O valor total a ser pago e de R$%.2f;", x, pedido, valorT);
    } else {
        printf("\nInsira um item existente do cardapio da loja;");
    } 

    return 0;
}