/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando 
só os seguintes valores: 

61 - Brasília 
71 - Salvador 
11 - São Paulo 
21 - Rio de Janeiro 
32 - Juiz de Fora 
19 - Campinas 
27 - Vitória 
31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int ddd;

    printf("Me informe o DDD de onde voce mora: ");
    scanf("%d", &ddd);
    while (getchar() != '\n');


    switch (ddd)
    {
    case 61:
        printf("Voce e de Brasilia;");
        break;

    case 71: 
        printf("Voce e de Salvador;");
        break;

    case 11:
        printf("Voce e de Sao Paulo;");
        break;

    case 21:
        printf("Voce e do Rio de Janeiro;");
        break;

    case 32:
        printf("Voce e de Juiz de Fora;");
        break;

    case 19:
        printf("Voce e de Campinas;");
        break;

    case 27:
        printf("Voce e de Vitoria;");
        break;
    
    case 31:
        printf("Voce e de Belo Horizonte");
        break;

    default:
        printf("O ddd informado nao foi encontrado;");
        break;
    }

    return 0;
}