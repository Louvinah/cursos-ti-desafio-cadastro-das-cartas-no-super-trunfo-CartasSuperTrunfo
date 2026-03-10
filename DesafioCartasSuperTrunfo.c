#include <stdio.h>

int main(){

    //Criando as variáveis da primeira carta do Super Trunfo

    //tive que mudar de float para double na area do PIB, pois o valor era muito alto

    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    int pontosturisticos1;
    float area1;
    double pib1;
    float densidadepopulacional1;
    float pibpercapita1;

    //Aqui no scanf coloquei espaço antes da %, pois estava bugando algumas perguntas e não deixando registrar a informação da carta.
    //A variavel estado1, assim como a estado2, utilizei %c, já que foi pedido um único caractere.
    //Nas veriáveis codigo1, codigo2, cidade1 e cidade2, na entrada de dados, não coloquei o & ...
    //pois estava bugando no terminal, como são arrays, percebi que funcionam sem &.

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Número da população: \n");
    scanf(" %d", &populacao1);

    printf("Quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosturisticos1);

    printf("Digite o tamanho da área km²: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %lf", &pib1);

    //calculando a densidade populacional e o PIB per capita

    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

    //Registrando a primeira carta
    //Na área e no PIB utilizei %.2f para definir o número de casas decimais, no caso, duas casas decimais.

    printf("\n---CARTA 1---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Área km²: %.1f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f\n", pibpercapita1);

    //Criando as variáveis da segunda carta do Super Trunfo

    //tive que mudar de float para double na area do PIB, pois o valor era muito alto

    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2;
    double pib2;
    float densidadepopulacional2;
    float pibpercapita2;

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Número da população: \n");
    scanf(" %d", &populacao2);

    printf("Quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosturisticos2);

    printf("Digite o tamanho da área km²: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %lf", &pib2);

    //calculando a densidade populacional e o PIB per capita

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;

    //Registrando a segunda carta

    printf("\n---CARTA 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Área km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f\n", pibpercapita2);

    //finalizando o código com sucesso
    
    return 0;

}