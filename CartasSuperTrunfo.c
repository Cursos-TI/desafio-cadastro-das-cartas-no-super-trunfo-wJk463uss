#include <stdio.h>


int main() {

    char estado[2]; // Letra do estado
    char codigo[4]; // Código da carta
    char cidade[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área em km²
    float pib; // PIB em bilhões de reais
    int pnturistico;  // Pontos turísticos

    //Carta A
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pnturistico);

    //Exibindo os dados Carta A
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos turísticos: %d\t\n", pnturistico);

    //Carta B
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%3s", codigo);

    printf("Digite a cidade: \n");
    scanf("%49s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pnturistico);

    //Exibindo os dados Carta B
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos turísticos: %d\t\n", pnturistico);

    return 0;
}
