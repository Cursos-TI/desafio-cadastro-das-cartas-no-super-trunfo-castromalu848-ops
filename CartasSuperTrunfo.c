#include <stdio.h>

int main() {
    
    char nome1 [50];
    char estado1 [3];
    char codigo1 [50];
    int numero_de_pontos_turisticos1;
    int populacao1;
    float PIB1;
    float area1;

    char nome2 [50];
    char estado2[3];
    char codigo2 [5];
    int numero_de_pontos_turisticos2;
    int populacao2;
    float PIB2;
    float area2;

    // Carta 1 

    printf("=====Dados da carta 1=====\n\n");

    printf( "Digite o nome da cidade 1: \n");
    scanf(" %49[^\n]", nome1);

    printf( "Digite a sigla do Estado 1: \n");
    scanf("%s", estado1);

    printf( "Digite o código da carta 1: \n");
    scanf("%s", codigo1);

    printf( "Digite o número de pontos turísticos 1: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf( "Digite o número da população 1: \n");
    scanf("%d", &populacao1);

   printf( "Digite o número da PIB 1: \n");
    scanf("%f", &PIB1);

    printf( "Digite o número da area 1: \n");
    scanf("%f", &area1);

    // Carta 2 

    printf("\n =====Dados da carta 2===== \n\n");

    printf( "Digite o nome da cidade 2: \n");
    scanf(" %49[^\n]",nome2);

    printf( "Digite a sigla do Estado 2: \n");
    scanf("%s", estado2);

    printf( "Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf( "Digite o número de pontos turísticos 2: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf( "Digite o número da população 2: \n");
    scanf("%d", &populacao2);

   printf( "Digite o número da PIB 2: \n");
    scanf("%f", &PIB2);

    printf( "Digite o número da area 2: \n");
    scanf("%f", &area2);

    printf("\n  ======Dados da carta 1===== \n"" Nome da cidade: %s \n estado: %s \n codigo: %s \n numero de pontos turisticos: %d \n populacao: %d \n PIB: %.2f \n Area: %.2f", nome1, estado1, codigo1, numero_de_pontos_turisticos1, populacao1, PIB1, area1);                     
    printf("\n\n =====Dados da carta 2===== \n"" Nome da cidade: %s \n estado: %s \n codigo: %s \n numero de pontos turisticos: %d \n populacao: %d \n PIB: %.2f \n Area: %.2f", nome2, estado2, codigo2, numero_de_pontos_turisticos2, populacao2, PIB2, area2);                   
    
    return 0;
}