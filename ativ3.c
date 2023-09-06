/*
Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

Enumere cada opção de prato, sobremesa e bebida.
Prato: 1 - vegetariano, 2 – Peixe230, 3 – Frango, 4 – Carne;
Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;
Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int P, S, B, Pc, Sc, Bc, CT;

    printf("Para descobrirmos o montante de calorias que voce consumiu, voce precisa me informar o que comeu. \nPratos: \n1 - Vegetariano; \n2 - Peixe; \n3 - Frango; \n4 - Carne; \nQual prato voce comeu? Me informe o numero: ");
    scanf("%d", &P);
    while (getchar() != '\n');

    switch (P){
        case 1:
        printf("\nO prato vegetariano contem 180cal;");
        Pc = 180;
        break;
        case 2:
        printf("\nO Peixe contem 230cal;");
        Pc = 230;
        break;
        case 3:
        printf("\nO Frango contem 180cal;");
        Pc = 250;
        break;
        case 4:
        printf("\nA Carne contem 180cal;");
        Pc = 350;
        break;
        default:
        printf("\nPrato informado inexistente;");
        Pc = 0;
    }

    printf("\nSobremesas: \n1 - Abacaxi; \n2 - Sorvete Diet; \n3 - Mousse diet; \n4 - Mouse chocolate; \nQual sobremesa voce comeu? Me informe o numero: ");
    scanf("%d", &S);
    while (getchar() != '\n');

    switch (S){
        case 1:
        printf("\nO Abacaxi contem 75cal;");
        Sc = 75;
        break;
        case 2:
        printf("\nO Sorvete Diet contem 110cal;");
        Sc = 110;
        break;
        case 3:
        printf("\nO Mousse Diet contem 170cal;");
        Sc = 170;
        break;
        case 4:
        printf("\nO Mousse Chocolate contem 200cal;");
        Sc = 200;
        break;
        default:
        printf("\nSobremesa informada inexistente;");
        Sc = 0;
    }

    printf("\nBebidas: \n1 - Cha; \n2 - Suco de Laranja; \n3 - Suco de Melao; \n4 - Refrigerante Diet; \nQual bebida voce ingeriu? Me informe o numero: ");
    scanf("%d", &B);
    while (getchar() != '\n');

    switch (B){
        case 1:
        printf("\nO Cha contem 20cal;");
        Bc = 20;
        break;
        case 2:
        printf("\nO Suco de Laranja contem 70cal;");
        Bc = 70;
        break;
        case 3:
        printf("\nO Suco de Melao contem 100cal;");
        Bc = 100;
        break;
        case 4:
        printf("\nO Refrigerante Diet contem 65cal;");
        Bc = 65;
        break;
        default:
        printf("\nBebida informada inexistente;");
        Bc = 0;
    }

    CT = Pc + Sc + Bc;
    printf("\nVoce recebeu um ganho de %dcal no total;", CT);

    return 0;
}