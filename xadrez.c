#include <stdio.h>

int main(){
    int torre, bispo, rainha; 
    int casasT, casasB, casasR; // Número de casas usadas para mover as peças (Torre, Bispo, Rainha)
    int opcao; // Opção referente ao switch

    printf("Seja bem vindo ao jogo de Xadrez\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Qual peça deseja mover? (1-3): ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Deseja mover a Torre quantas casas à direita? (1-5): ");
        scanf("%d", &casasT);
        if(casasT <= 5){
            printf("\nMovimentando a Torre %d casas à direita.\n", casasT);
            for(torre = 0; torre < casasT; torre++){
                printf("Direita\n");
            }
        }else{
            printf("Digite um número de 1 a 5.");
        }break;
    case 2:
        printf("Deseja mover o Bispo quantas casas à diagonal para direita? (1-5): ");
        scanf("%d", &casasB);

        if(casasB <= 5){
            printf("\nMovimentando o Bispo %d casas à diagonal para direita.\n", casasB);
            for(bispo = 0; bispo < casasB; bispo++){
                printf("Cima Direita\n");
            }
        }else{
            printf("Digite um número de 1 a 5.");
        }break;
    case 3:
        printf("Deseja mover a Rainha quantas casas à esquerda? (1-8): ");
        scanf("%d", &casasR);

        if(casasR <= 8){
            printf("\nMovimentando a Rainha %d casas à esquerda.\n", casasR);
            for(rainha = 0; rainha < casasR; rainha++){
                printf("Esquerda\n");
            }
        }else{
            printf("Digite um número de 1 a 8.");
        }break;

    default:
        printf("\nA opção escolhida não existe.");
        break;
    }
}