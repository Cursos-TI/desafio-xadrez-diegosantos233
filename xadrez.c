#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    int Bispo = 0;
    int Bispomovimento = 5;


    // explicando a Movimentação do Bispo
    
    printf ("No xadrez, o bispo pode mover-se quantas casas desejar, desde que sejam diagonais e vazias.\n");
    printf ("O bispo se move em direção às casas da mesma cor\n");
    printf ("O bispo não pode mudar de cor durante o jogo\n");
    printf ("Cada jogador começa a partida com um par de bispos\n");
    printf ("Um bispo se move pelas casas de cor clara e o outro pelas casas de cor escura\n");
    printf ("O bispo não pode saltar sobre outras peças\n");

    printf("quantas casa você vai Movimenta o Bispo\n");
    scanf("%d",&Bispomovimento);


    // Movimentação do Bispo
    
    while (Bispo <= Bispomovimento)

    {
        if (Bispo > 0)
        {
            printf("o bispo se movimenta em diagonal esquerda para cima %d vez\n",Bispo);
        }

        if (Bispo == Bispomovimento)
        {
            printf("O bispo se movimenta %d casas em diagonal esquerda para cima\n",Bispomovimento);
        }
        

        Bispo++;
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    int Torre = 0;
    
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    int Rainha = 0;
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
