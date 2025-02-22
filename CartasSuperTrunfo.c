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
    float superpoder;
    
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
        scanf("%s", &cartas[i].codigo);
        printf("--------------------------------------------------------\n");

        printf("Nome da Cidade: \n");
        scanf("%11s", &cartas[i].cidade);
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
        float inversodensidade = (1 / cartas[i].densidade);
        cartas[i].superpoder= (cartas[i].populacao + cartas[i].area + cartas[i].pib + cartas[i].pontos + cartas[i].capita + cartas[i].densidade);
        int vencedora = 0;
        if (cartas[0].densidade < cartas[1].densidade){
        vencedora = 1;
        }

    }

    printf("\n--------------------------------------------------------\n");
    printf("\n----------Cartas Cadastradas com sucesso!---------------\n");
    printf("\n--------------------------------------------------------\n");

    int pontos_carta 1 = 0, pontos_carta 2 = 0;

    printf("\nComparação dos atributos:\n");

    if (cartas[0].idade > cartas[1].idade) {
        pontos_carta1++;
        printf("Idade: Carta 1 venceu\n");
    } else if (cartas[0].idade < cartas[1].idade) {
        pontos_carta2++;
        printf("Idade: Carta 2 venceu\n");
    }

    if (cartas[0].populacao > cartas[1].populacao) {
        pontos_carta1++;
        printf("População: Carta 1 venceu\n");
    } else if (cartas[0].populacao < cartas[1].populacao) {
        pontos_carta2++;
        printf("População: Carta 2 venceu\n");
    }

    if (cartas[0].area > cartas[1].area) {
        pontos_carta1++;
        printf("Área: Carta 1 venceu\n");
    } else if (cartas[0].area < cartas[1].area) {
        pontos_carta2++;
        printf("Área: Carta 2 venceu\n");
    }

    if (cartas[0].pib > cartas[1].pib) {
        pontos_carta1++;
        printf("PIB: Carta 1 venceu\n");
    } else if (cartas[0].pib < cartas[1].pib) {
        pontos_carta2++;
        printf("PIB: Carta 2 venceu\n");
    }

    if (cartas[0].pontos > cartas[1].pontos) {
        pontos_carta1++;
        printf("Pontos turísticos: Carta 1 venceu\n");
    } else if (cartas[0].pontos < cartas[1].pontos) {
        pontos_carta2++;
        printf("Pontos turísticos: Carta 2 venceu\n");
    }

    if (cartas[0].densidade > cartas[1].densidade) {
        pontos_carta1++;
        printf("Densidade populacional: Carta 1 venceu\n");
    } else if (cartas[0].densidade < cartas[1].densidade) {
        pontos_carta2++;
        printf("Densidade populacional: Carta 2 venceu\n");
    }
     
    for (i = 0; i < jogo_cartas; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.3f km²\n", cartas[i].area);
        printf("PIB: %.9f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontos);
        printf("Densidade Populacional: %.2f hab/km²\n",cartas[i].densidade);
        printf("PIB per Capita: %.2f reais\n", cartas[i].capita);
        printf("Super Poder: %.2f \n", cartas[i].superpoder);
        printf("--------------------------------------------------------\n");
        printf("        Obrigado por participar, volte sempre!          \n");
    }

    return 0;
}*
