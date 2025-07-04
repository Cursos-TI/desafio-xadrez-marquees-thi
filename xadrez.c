#include <stdio.h>

void torre(){
    int torre;
    int casasT;
    printf("Deseja mover a Torre quantas casas à direita? (1-5): ");
        scanf("%d", &casasT);
        if(casasT <= 5){
            printf("\nMovimentando a Torre %d casas à direita.\n", casasT);
            for(torre = 0; torre < casasT; torre++){
                printf("Direita\n");
            }
        }else{
            printf("Digite um número de 1 a 5.\n");
        }
}

void bispo(){
    int bispo;
    int casasB;
    printf("Deseja mover o Bispo quantas casas à diagonal para direita? (1-5): ");
        scanf("%d", &casasB);

        if(casasB <= 5){
            printf("\nMovimentando o Bispo %d casas à diagonal para direita.\n", casasB);
            for(bispo = 0; bispo < casasB; bispo++){
                printf("Cima Direita\n");
            }
        }else{
            printf("Digite um número de 1 a 5.\n");
        }
}

void rainha(){
    int rainha;
    int casasR;
    printf("Deseja mover a Rainha quantas casas à esquerda? (1-8): ");
        scanf("%d", &casasR);

        if(casasR <= 8){
            printf("\nMovimentando a Rainha %d casas à esquerda.\n", casasR);
            for(rainha = 0; rainha < casasR; rainha++){
                printf("Esquerda\n");
            }
        }else{
            printf("Digite um número de 1 a 8.\n");
        }
}

void cavalo(){
    int cavalo; 
    int casasC; 
    printf("Iniciando o movimento do cavalo.\n");
        casasC = 0;
        while(casasC < 3){
            for(casasC = 0; casasC < 2; casasC++){
                printf("Cima\n");
            }
            printf("Direita\n");
            casasC++;
        }
}

int main(){
    int opcao; // Opção referente ao switch

    printf("Seja bem vindo ao jogo de Xadrez\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Qual peça deseja mover? (1-4): ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        torre();
        break;
    case 2:
        bispo();
        break;
    case 3:
        rainha();
        break;
    case 4:
        cavalo();
        break;

    default:
        printf("\nA opção escolhida não existe.");
        break;
    }
}