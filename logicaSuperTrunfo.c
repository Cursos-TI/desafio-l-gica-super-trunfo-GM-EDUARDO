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

    // ===== COMPARAÇÃO (POPULAÇÃO) =====
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n\n");

    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}