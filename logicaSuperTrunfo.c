/*#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // ===== CARTA 1 =====
    char estado1[20];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pib_per_capita1;

    // ===== CARTA 2 =====
    char estado2[20];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pib_per_capita2;

    int opcao;

    // ===== CADASTRO CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== CADASTRO CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ===== EXIBIÇÃO DOS DADOS =====
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // ===== MENU =====
    printf("\n=== Escolha o atributo para comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    // ===== SWITCH =====
    switch(opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // REGRA ESPECIAL
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}*/

/*
#include <stdio.h>

// Desafio Super Trunfo - Comparação das Cartas

int main() {

    // ===== CARTA 1 - CURITIBA =====
    char* estado1 = "PR";
    char* codigo1 = "A01";
    char* cidade1 = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 434.89;
    float pib1 = 98.98;
    int pontos1 = 25;

    float densidade1;
    float pib_per_capita1;

    // ===== CARTA 2 - FORTALEZA =====
    char* estado2 = "CE";
    char* codigo2 = "B01";
    char* cidade2 = "Fortaleza";
    int populacao2 = 2686612;
    float area2 = 312.35;
    float pib2 = 73.40;
    int pontos2 = 20;

    float densidade2;
    float pib_per_capita2;

    int opcao;

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ===== EXIBIÇÃO =====
    printf("=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // ===== MENU =====
    printf("\n=== Escolha o atributo para comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado ===\n");

    // ===== SWITCH =====
    switch(opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // REGRA ESPECIAL
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}*/

#include <stdio.h>

// Desafio Super Trunfo - Nível Mestre

int main() {

    // ===== CARTA 1 - CURITIBA =====
    char* estado1 = "PR";
    char* cidade1 = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 434.89;
    float pib1 = 98.98;
    int pontos1 = 25;

    float densidade1;

    // ===== CARTA 2 - FORTALEZA =====
    char* estado2 = "CE";
    char* cidade2 = "Fortaleza";
    int populacao2 = 2686612;
    float area2 = 312.35;
    float pib2 = 73.40;
    int pontos2 = 20;

    float densidade2;

    int op1, op2;

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // ===== EXIBIÇÃO =====
    printf("=== Cartas ===\n");
    printf("%s (%s)\n", cidade1, estado1);
    printf("%s (%s)\n", cidade2, estado2);

    // ===== MENU 1 =====
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n");
    scanf("%d", &op1);

    // ===== MENU 2 =====
    printf("\nEscolha o SEGUNDO atributo:\n");

    if(op1 != 1) printf("1 - Populacao\n");
    if(op1 != 2) printf("2 - Area\n");
    if(op1 != 3) printf("3 - PIB\n");
    if(op1 != 4) printf("4 - Pontos\n");
    if(op1 != 5) printf("5 - Densidade\n");

    scanf("%d", &op2);

    if(op1 == op2){
        printf("Erro: nao pode repetir atributo!\n");
        return 0;
    }

    float v1c1, v1c2, v2c1, v2c2;

    // ===== ATRIBUTO 1 =====
    switch(op1){
        case 1: v1c1=populacao1; v1c2=populacao2; break;
        case 2: v1c1=area1; v1c2=area2; break;
        case 3: v1c1=pib1; v1c2=pib2; break;
        case 4: v1c1=pontos1; v1c2=pontos2; break;
        case 5: v1c1=densidade1; v1c2=densidade2; break;
        default: printf("Opcao invalida\n"); return 0;
    }

    // ===== ATRIBUTO 2 =====
    switch(op2){
        case 1: v2c1=populacao1; v2c2=populacao2; break;
        case 2: v2c1=area1; v2c2=area2; break;
        case 3: v2c1=pib1; v2c2=pib2; break;
        case 4: v2c1=pontos1; v2c2=pontos2; break;
        case 5: v2c1=densidade1; v2c2=densidade2; break;
        default: printf("Opcao invalida\n"); return 0;
    }

    // ===== SOMA =====
    float soma1 = v1c1 + v2c1;
    float soma2 = v1c2 + v2c2;

    // ===== RESULTADO =====
    printf("\n=== RESULTADO ===\n");

    printf("%s: %.2f + %.2f = %.2f\n", cidade1, v1c1, v2c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, v1c2, v2c2, soma2);

    // operador ternário
    printf("\nVencedor: %s\n",
        (soma1 > soma2) ? cidade1 :
        (soma2 > soma1) ? cidade2 :
        "Empate");

    return 0;
}