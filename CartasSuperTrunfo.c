#include <stdio.h>

#define jogo_cartas 2

typedef struct {
    int idade;
    int populacao;
    int pontos;
    float area;
    double pib;
    char estado;
    char codigo[4];
    char cidade[12];
    float densidade;
    float capita;
} Carta;

int main() {
    Carta cartas[jogo_cartas];  
    int i;

    printf("--------------------------------------------------------\n");
    printf("-          Olá, Bem Vindo ao Jogo de Cartas            -\n");
    printf("-               Super Trunfo do Novaes                 -\n");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < jogo_cartas; i++) {
        printf("\n         Vamos inciar com o Cadastro da Carta %d\n", i + 1);
    printf("--------------------------------------------------------\n");
        printf("Digite um número: \n");
        scanf("%d", &cartas[i].idade);
        printf("--------------------------------------------------------\n");

        printf("Escolha uma letra de 'A a H': \n");
        scanf(" %c", &cartas[i].estado);
        printf("--------------------------------------------------------\n");

        printf("Escolha um número de 01 a 04: \n");
        scanf("%s", cartas[i].codigo);
        printf("--------------------------------------------------------\n");

        printf("Nome da Cidade: \n");
        scanf("%11s", cartas[i].cidade);
        printf("--------------------------------------------------------\n");

        printf("População: \n");
        scanf("%d", &cartas[i].populacao);
        printf("--------------------------------------------------------\n");

        printf("Área (em km²): \n");
        scanf("%f", &cartas[i].area);
        printf("--------------------------------------------------------\n");

        printf("PIB: \n");
        scanf("%lf", &cartas[i].pib);
        printf("--------------------------------------------------------\n");

        printf("Número de pontos turísticos: \n");
        scanf("%d", &cartas[i].pontos);

        cartas[i].densidade = (cartas[i].populacao / cartas[i].area); 
        cartas[i].capita= (cartas[i].pib / cartas[i].populacao);
    }

    printf("\n--------------------------------------------------------\n");
    printf("\n----------Cartas Cadastradas com sucesso!---------------\n");
    printf("\n--------------------------------------------------------\n");
    for (i = 0; i < jogo_cartas; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.3f km²\n", cartas[i].area);
        printf("PIB: %.9f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontos);
        printf("Densidade Populacional: %.2f hab/km²\n"cartas[i].densidade);
        printf("PIB per Capita: %.2f reais\n", cartas[i].capita);
        printf("--------------------------------------------------------\n");
        printf("        Obrigado por participar, volte sempre!          \n");
    }

    return 0;
}
