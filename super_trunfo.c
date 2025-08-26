#include <stdio.h>

int main()
{

    /********************************************
     *                                          *
     *      Declaração das variáveis            *
     *                                          *
     * ******************************************/
    char estado, codigoCarta[4], cidade[50], estado2, codigoCarta2[4], cidade2[50];
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float areaCidade, pib, areaCidade2, pib2;

    // Início da interação com o usuário

    // Cadastro da carta 1:
    printf("Carta 1:\n");

    printf("Estado (Somente um caracter): \n");
    scanf(" %c", &estado);

    printf("Código da carta (A letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%i", &populacao);

    printf("Área (Em Km): \n");
    scanf(" %f", &areaCidade);

    printf("PIB: \n");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos);

    printf("------------------------------------------------------------------------------------------------\n");

    // Cadastro da carta 2
    printf("Carta 2:\n");

    printf("Estado (Somente um caracter): \n");
    scanf(" %c", &estado2);

    printf("Código da carta (A letra do estado + um número de 01 a 04): \n");
    scanf(" %s", codigoCarta2);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%i", &populacao2);

    printf("Área (Em Km): \n");
    scanf(" %f", &areaCidade2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos2);

    //Calcular a desidade demográfica e o pib per capita de cada carta
    float densidadeDemografica = populacao / areaCidade;
    float densidadeDemografica2 = populacao2 / areaCidade2;

    float pibPerCapita = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    
    printf("------------------------------------------------------------------------------------------------\n");

    // Exibir dados cadastrados

    printf("Cartas cadastradas\n");
    printf("Carta 1:\n");

    printf("Estado: %c \n", estado);

    printf("Código: %s \n", codigoCarta);

    printf("Nome da cidade: %s \n", cidade);

    printf("População: %i \n", populacao);

    printf("Área: %.2f km²\n", areaCidade);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %i \n", pontosTuristicos);

    printf("Densidade demográfica: %.2f hab/km² \n", densidadeDemografica);

    printf("PIB per capita: %.2f reais \n", pibPerCapita);

    printf("------------------------------------------------------------------------------------------------\n");

    printf("Carta 2:\n");

    printf("Estado: %c \n", estado2);

    printf("Código: %s \n", codigoCarta2);

    printf("Nome da cidade: %s \n", cidade2);

    printf("População: %i \n", populacao2);

    printf("Área: %.2f km²\n", areaCidade2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %i \n", pontosTuristicos2);

    printf("Densidade demográfica: %.2f hab/km² \n", densidadeDemografica2);

    printf("PIB per capita: %.2f reais \n", pibPerCapita2);

    return 0;
}
