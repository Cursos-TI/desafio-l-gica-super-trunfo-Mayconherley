#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis para o calculo
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;

    
    // Cadastro da primeira carta:
    printf("Cadastro da carta 1\n");
    printf("Estado: \n");
    scanf("%s", &estado1);
    printf("Codigo: \n");
    scanf("%s", &codigo1);
    printf("Nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("População: \n");
    scanf("%u", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);
  
     // Cadastro da segunda carta:
     printf("Cadastro da carta 2\n");
     printf("Estado: \n");
     scanf("%s", &estado2);
     printf("Codigo: \n");
     scanf("%s", &codigo2);
     printf("Nome da cidade: \n");
     scanf("%s", nomeCidade2);
     printf("População: \n");
     scanf("%u", &populacao2);
     printf("Área: \n");
     scanf("%f", &area2);
     printf("PIB: \n");
     scanf("%f", &pib2);
     printf("Pontos turísticos: \n");
     scanf("%d", &pontosTuristicos2);
   
     //Calculo
     densidadePop1 = populacao1 / area1;
     densidadePop2 = populacao2 / area2;

     pibPerCapita1 =pib1 / populacao1;
     pibPerCapita2 =pib2 / populacao2;

    // Exibibindo e comparando as cartas
    if (populacao1 > populacao2){
        printf("Comparação de cartas (Atributo: População):\n\n");

        printf("Carta1 - %s(%s). População: %d  Área: %f PIB: %f Pontos Turísticos(%d)\n", nomeCidade1, estado1, populacao1, area1, pib1, pontosTuristicos1);
        printf("Carta2 - %s(%s). População: %d  Área: %f PIB: %f Pontos Turísticos(%d)\n", nomeCidade2, estado2, populacao2, area2, pib2, pontosTuristicos2);
        
        printf("Carta vencedora (%s) por maior população \n", nomeCidade1);
    }else {
        printf("Comparação de cartas (Atributo: População):\n\n");

        printf("Carta1 - %s(%s). População: %d  Área: %f PIB: %f Pontos Turísticos(%d)\n", nomeCidade1, estado1, populacao1, area1, pib1, pontosTuristicos1);
        printf("Carta2 - %s(%s). População: %d  Área: %f PIB: %f Pontos Turísticos(%d)\n", nomeCidade2, estado2, populacao2, area2, pib2, pontosTuristicos2);
        
        printf("Carta vencedora (%s) por maior população \n", nomeCidade2);
    }
   
    return 0;
}
