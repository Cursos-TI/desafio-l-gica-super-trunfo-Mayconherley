#include <stdio.h>
#include <string.h>

int main() {
    //Declaração de variáveis
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePop1, densidadePop2;

    // Cadastro da primera carta
    printf("Cadastro da carta 1\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da primera carta    
    printf("\nCadastro da carta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Densidade
    densidadePop1 = populacao1 / area1;
    densidadePop2 = populacao2 / area2;

    //Declaração de novas variáveis
    int attr1, attr2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Primeiro menu
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &attr1);

    // Segundo menu (usando o if para não repetir o primeiro)
    printf("\nEscolha o segundo atributo para comparar:\n");
    if (attr1 != 1) printf("1 - População\n");
    if (attr1 != 2) printf("2 - Área\n");
    if (attr1 != 3) printf("3 - PIB\n");
    if (attr1 != 4) printf("4 - Pontos Turísticos\n");
    if (attr1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &attr2);

    printf("\nComparando %s (%s) com %s (%s)\n\n", nomeCidade1, estado1, nomeCidade2, estado2);

    // Atribuição dos valores para o primeiro atributo
    switch (attr1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidadePop1; valor1_c2 = densidadePop2; break;
        default: printf("Opção inválida para o primeiro atributo!\n"); return 1;
    }

    // Atribuição dos valores para o segundo atributo
    switch (attr2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidadePop1; valor2_c2 = densidadePop2; break;
        default: printf("Opção inválida para o segundo atributo!\n"); return 1;
    }

    // Mostrar os valores
    printf("Atributo 1 (opção %d): %.2f x %.2f\n", attr1, valor1_c1, valor1_c2);
    printf("Atributo 2 (opção %d): %.2f x %.2f\n", attr2, valor2_c1, valor2_c2);

    // Soma dos valores (respeitando inversão da densidade)
    float soma1 = (attr1 == 5 ? -valor1_c1 : valor1_c1) + (attr2 == 5 ? -valor2_c1 : valor2_c1);
    float soma2 = (attr1 == 5 ? -valor1_c2 : valor1_c2) + (attr2 == 5 ? -valor2_c2 : valor2_c2);

    printf("Soma dos atributos (ajustada para densidade): %.2f x %.2f\n", soma1, soma2);

    // Resultado
    if (soma1 > soma2)
        printf("Vencedora: %s\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Vencedora: %s\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}
