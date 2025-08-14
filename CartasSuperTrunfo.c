#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char nome1 [50];
    char codigo1 [50];
    int numero_de_pontos_turisticos1;
    int populacao1;
    float PIB1;
    float area1;

    char nome2 [50];
    char codigo2 [50];
    int numero_de_pontos_turisticos2;
    int populacao2;
    float PIB2;
    float area2;

    // Carta 1 

    printf("Dados da carta 1:\n\n");

    printf( "Digite o nome da cidade 1: \n");
    scanf("%s",&nome1);

    printf( "Digite o código da carta 1: \n");
    scanf("%s",&codigo1);

    printf( "Digite o número de pontos turísticos 1: \n");
    scanf( "%i", &numero_de_pontos_turisticos1);

    printf( "Digite o número da população 1: \n");
    scanf( "%i", &populacao1);

   printf( "Digite o número da PIB 1: \n");
    scanf( "%f", &PIB1);

    printf( "Digite o número da area 1: \n");
    scanf( "%f", &area1);

    // Carta 2 

    printf("\n Dados da carta 2: \n\n");

    printf( "Digite o nome da cidade 2: \n");
    scanf("%s",&nome2);

    printf( "Digite o código da carta 2: \n");
    scanf("%s",&codigo2);

    printf( "Digite o número de pontos turísticos 2: \n");
    scanf( "%i", &numero_de_pontos_turisticos2);

    printf( "Digite o número da população 2: \n");
    scanf( "%i", &populacao2);

   printf( "Digite o número da PIB 2: \n");
    scanf( "%f", &PIB2);

    printf( "Digite o número da area 2: \n");
    scanf( "%f", &area2);

    printf("\n Segue os dados da carta um: \n"" Nome da cidade: %s \n codigo: %s \n numero de pontos turisticos: %i \n populacao: %i \n PIB: %.f \n Area: %.f", nome1, codigo1, numero_de_pontos_turisticos1, populacao1, PIB1, area1);                     
    printf("\n\n Segue os dados da carta dois: \n"" Nome da cidade: %s \n codigo: %s \n numero de pontos turisticos: %i \n populacao: %i \n PIB: %.f \n Area: %.f", nome2, codigo2, numero_de_pontos_turisticos2, populacao2, PIB2, area2);                   
    
    return 0;
}
