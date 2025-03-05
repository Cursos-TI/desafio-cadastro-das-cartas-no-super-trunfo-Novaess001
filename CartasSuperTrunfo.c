#include <stdio.h>
#include <locale.h>

#define jogo_cartas 2

typedef struct {
    int pontos, populacao;
    float area;
    double pib;
    char estado;
    char codigo[4];
    char cidade[12];
    float densidade;
    float capita;
    float superpoder;
} Carta;

void compararCartas(Carta jogador1, Carta jogador2, int atributo) {
    float valorjogador1 = 0, valorjogador2 = 0;
    char atributonome[50];

    
    switch (atributo) {
        case 1:
            sprintf(atributonome, "População");
            valorjogador1 = jogador1.populacao;
            valorjogador2 = jogador2.populacao;
            break;
        case 2:
            sprintf(atributonome, "Área");
            valorjogador1 = jogador1.area;
            valorjogador2 = jogador2.area;
            break;
        case 3:
            sprintf(atributonome, "PIB");
            valorjogador1 = jogador1.pib;
            valorjogador2 = jogador2.pib;
            break;
        case 4:
            sprintf(atributonome, "N° de Pontos Turísticos");
            valorjogador1 = jogador1.pontos;
            valorjogador2 = jogador2.pontos;
            break;
        case 5:
            sprintf(atributonome, "Densidade Demográfica");
            valorjogador1 = jogador1.densidade;
            valorjogador2 = jogador2.densidade;
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }

    
    printf("\n--------------------------------------------------------\n");
    printf("Resultado da Comparação \n");
    printf("Atributo escolhido: %s\n", atributonome);
    printf("Carta 1 - %s: %.2f\n", jogador1.cidade, valorjogador1);  
    printf("Carta 2 - %s: %.2f\n", jogador2.cidade, valorjogador2);  

    
    if (valorjogador1 > valorjogador2){
        printf("Carta 1 Venceu! \n");
    } else if (valorjogador1 < valorjogador2){
        printf("Carta 2 Venceu! \n");
    } else {
        printf("Empate! \n");
    }

    printf("\n--------------------------------------------------------\n");
}


int main() {
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    
    Carta cartas[jogo_cartas];  
    int i;

    printf("--------------------------------------------------------\n");
    printf("-          Olá, Bem Vindo ao Jogo de Cartas            -\n");
    printf("-               Super Trunfo do Novaes                 -\n");
    printf("--------------------------------------------------------\n");

    
    for (i = 0; i < jogo_cartas; i++) {
        printf("\n         Vamos iniciar com o Cadastro da Carta %d\n", i + 1);
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

        if (cartas[i].area != 0) 
            cartas[i].densidade = cartas[i].populacao / cartas[i].area; 
        else 
            cartas[i].densidade = 0;

        cartas[i].capita = cartas[i].pib / cartas[i].populacao;
        cartas[i].superpoder = (cartas[i].populacao + cartas[i].area + cartas[i].pib + cartas[i].pontos + cartas[i].capita + cartas[i].densidade);
    }

    printf("\n--------------------------------------------------------\n");
    printf("\n----------Cartas Cadastradas com sucesso!---------------\n");
    printf("\n--------------------------------------------------------\n");

    
    int escolhaJogador;
    
    
    printf("\nEscolha um atributo para comparar as cartas:\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");
    printf("6. Sair \n");
    scanf("%d", &escolhaJogador);

    
    if (escolhaJogador >= 1 && escolhaJogador <= 5) {
        printf("\nComparando as Cartas: \n");
        compararCartas(cartas[0], cartas[1], escolhaJogador);
    } else if (escolhaJogador == 6) {
        printf("Obrigado por participar, volte sempre!\n");
    } else {
        printf("Opção inválida! Programa encerrado.\n");
    }

    return 0;
}
