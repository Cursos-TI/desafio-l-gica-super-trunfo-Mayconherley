#include <stdio.h>
#include <string.h>

int main() {

    // Declrando variáveis
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidadePop1, densidadePop2;

    // Cadastro da primeira carta:
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

    // Cadastro da segunda carta:
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

    // Cálculo da densidade
    densidadePop1 = populacao1 / area1;
    densidadePop2 = populacao2 / area2;

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) com %s (%s)\n", nomeCidade1, estado1, nomeCidade2, estado2);

    //Menu de interatividade usando switch e if else
    switch (opcao) {
        case 1:
            printf("População: %u x %u\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s (maior população)\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s (maior população)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 > area2)
                printf("Vencedora: %s (maior área)\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedora: %s (maior área)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s (maior PIB)\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s (maior PIB)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s (mais pontos turísticos)\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s (mais pontos turísticos)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade demográfica: %.2f x %.2f\n", densidadePop1, densidadePop2);
            if (densidadePop1 < densidadePop2)
                printf("Vencedora: %s (menor densidade)\n", nomeCidade1);
            else if (densidadePop2 < densidadePop1)
                printf("Vencedora: %s (menor densidade)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
