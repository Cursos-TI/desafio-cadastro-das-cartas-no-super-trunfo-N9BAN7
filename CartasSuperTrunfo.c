#include <stdio.h>

int main() {
 // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[4];          
    char nomecidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n");

    // Leitura dos dados da carta 1
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nCadastro da Carta 2:\n");

    // Leitura dos dados da carta 2
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados cadastrados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    // Exibição dos dados cadastrados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
