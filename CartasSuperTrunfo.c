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
    char atributonome[10];

    switch (atributo) {
        case 1:
            printf("Atributo escolhido: População - \n");
            if (jogador1.populacao > jogador2.populacao) {
                printf("Carta 1 Venceu!\n");
            } else if (jogador1.populacao < jogador2.populacao) {
                printf("Carta 2 Venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área - \n");
            if (jogador1.area > jogador2.area) {
                printf("Carta 1 Venceu! \n");
            } else if (jogador1.area < jogador2.area) {
                printf("Carta 2 Venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB - \n");
            if (jogador1.pib > jogador2.pib) {
                printf("Carta 1 Venceu! \n");
            } else if (jogador1.pib < jogador2.pib) {
                printf("Carta 2 Venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Número de pontos turísticos - \n");
            if (jogador1.pontos > jogador2.pontos) {
                printf("Carta 1 Venceu! \n");
            } else if (jogador1.pontos < jogador2.pontos) {
                printf("Carta 2 Venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade demográfica - \n");
            if (jogador1.densidade > jogador2.densidade) {
                printf("Carta 1 Venceu! \n");
            } else if (jogador1.densidade < jogador2.densidade) {
                printf("Carta 2 Venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }


printf("\n--------------------------------------------------------\n");
printf("Resultado da Comparação \n");
printf("Atributo escolhido: %s\n", atributonome);
printf("Carta 1 - %s: %.2f\n",jogador1.cidade, valorjogador1);
printf("Carta 2 - %s: %.2f\n",jogador2.cidade, valorjogador2);

if (valorjogador1 > valorjogador2){
    printf("Carta 1 %s Venceu! \n", jogador1.cidade);
    
} else if (valorjogador1 < valorjogador2){
    printf("Carta 2 %s Venceu! \n", jogador2.cidade);
}
 else{
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

    int pontos_carta1 = 0, pontos_carta2 = 0;

    
    int escolhaJogador;
    do {
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
        }

    } while (escolhaJogador != 1);

    printf("Obrigado por participar, volte sempre!\n");

    return 0;
}
