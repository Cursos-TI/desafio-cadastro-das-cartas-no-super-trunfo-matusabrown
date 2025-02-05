#include <stdio.h>

int main() {
   
    char estado[20];
    char codigo_cidade[20];
    char nome[20];
    int populacao;
    int n_pontost;
    float area;
    float pib;

  
    printf("Desafio novato cartas super trufo estados!\n\n\n");
    printf("Digite o estado: ");
    scanf("%s", &estado);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigo_cidade);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    printf("Digite a população em milhões de habitantes: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);
    printf("Digite o produto interno bruto ou PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib);
    printf("Digite quantos pontos turísticos tem na cidade: ");
    scanf("%d", &n_pontost);


    
    printf("\nAs características da sua cidade são: \n\n\n");
    printf("Estado: %s\n\n", estado);
    printf("código da cidade: %s\n\n", codigo_cidade);
    printf("Nome: %s\n\n", nome);
    printf("população: %d milhões de habitantes\n\n", populacao);
    printf("Área: %f Km²\n\n", area);
    printf("Produto interno bruto ou PIB: %f bilhões de R$\n\n", pib);
    printf("Número de pontos turísticos: %d\n\n", n_pontost);


    return 0;
}
