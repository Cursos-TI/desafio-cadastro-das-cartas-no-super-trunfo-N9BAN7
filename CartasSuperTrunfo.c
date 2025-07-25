#include <stdio.h>

int main(){
    //Declaração Variável 1

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Declaração Variável 2

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("CADASTRO DA CARTA 1\n");

    // Solicita e lê os dados da Carta 1
    printf("Digite o estado (A-H):");
    scanf(" %c", &estado1);
    getchar(); // Consome o \n

    printf("Digite o seu código (EX: A01):");
    scanf("%s", codigo1);
    getchar(); // Consome o \n

    printf("DIGITE SUA CIDADE:");
    scanf("%s", &cidade1);
    getchar(); // Consome o \n

    printf("Digite o número da população:");
    scanf("%d", &populacao1);
    getchar(); // Consome o \n

    printf("Digite o número da área:");
    scanf("%f", &area1);
    getchar(); // Consome o \n

    printf("Digite o PIB:");
    scanf("%f", &pib1);
    getchar(); // Consome o \n

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%d", &pontosturisticos1);
    getchar(); // Consome o \n

    printf("CADASTRO DA CARTA 2\n");

    // Solicita e lê os dados da Carta 1
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    getchar(); // Consome o \n

    printf("Digite o seu código (EX: A01): ");
    scanf("%s", codigo2);
    getchar(); // Consome o \n

    printf("DIGITE SUA CIDADE:");
    scanf("%s", &cidade2);
    getchar(); // Consome o \n

    printf("Digite o número da população:");
    scanf("%i", &populacao2);
    getchar(); // Consome o \n

    printf("Digite o número da área:");
    scanf("%f", &area2);
    getchar(); // Consome o \n

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    getchar(); // Consome o \n

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%i", &pontosturisticos2);
    getchar(); // Consome o \n

        // Exibição dos dados da carta 1
    printf("\n--- INFORMACOES DA CARTA 1 ---\n");
    printf("ESTADO: %c\n", estado1);
    printf("CODIGO: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULACAO: %d HABITANTES\n", populacao1);
    printf("AREA: %.2f KM²\n", area1);
    printf("PIB: %.2f BILHOES DE REAIS\n", pib1);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosturisticos1);

    // Exibição dos dados da carta 2
    printf("\n--- INFORMACOES DA CARTA 2 ---\n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULACAO: %d HABITANTES\n", populacao2);
    printf("AREA: %.2f KM²\n", area2);
    printf("PIB: %.2f BILHÕES DE REAIS\n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosturisticos2);

    return 0;
}