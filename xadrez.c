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
    int Bispomovimento = 0;


    // explicando a Movimentação do Bispo
    
    printf ("No xadrez, o bispo pode mover-se quantas casas desejar, desde que sejam diagonais e vazias.\n");
    printf ("O bispo se move em direção às casas da mesma cor,\n");
    printf ("O bispo não pode mudar de cor durante o jogo,\n");
    printf ("Cada jogador começa a partida com um par de bispos,\n");
    printf ("Um bispo se move pelas casas de cor clara e o outro pelas casas de cor escura,\n");
    printf ("O bispo não pode saltar sobre outras peças.\n");

    printf ("quantas casas você vai Movimenta o Bispo?\n");
    printf ("digitar aqui:");
    scanf ("%d",&Bispomovimento);


    // Movimentação do Bispo
    
    while (Bispo <= Bispomovimento)

    {
        if (Bispo > 0)
        {
            printf("o bispo se movimenta em diagonal direita para cima %d vez\n",Bispo);
        }

        if (Bispo == Bispomovimento)
        {
            printf("O bispo se movimenta %d casas em diagonal direita para cima\n",Bispomovimento);
            printf ("\n\n");
        }
        

        Bispo++;
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    int Torre = 0;
    int Torremovimento = 0;

    // explicando a Movimentação do Torre
    
    printf ("No xadrez, a torre pode se mover horizontalmente ou verticalmente,\n");
    printf("em qualquer número de casas desocupadas.\nEla não pode pular sobre peças adversárias ou aliadas.\n");
    printf ("A torre pode capturar uma peça inimiga movendo-se para a casa em que a peça inimiga está.\n");
    printf ("A torre pode participar de um movimento especial chamado roque, em parceria com o rei.\n");
    printf ("A torre pode se mover quantas casas quiser na horizontal ou vertical,\nmas não pode se mover diagonalmente.\n");
    printf ("No início da partida, cada jogador tem duas torres.\n");
    printf ("As torres brancas começam nas casas a1 e h1.\n");
    printf ("As torres pretas começam nas casas a8 e h8.\n");

    printf ("quantas casas você vai Movimenta o Torre?\n");
    printf ("digitar aqui:");
    scanf ("%d",&Torremovimento);


    // Movimentação do Torre

    do {
        if (Torre > 0)
        {
            printf("a torre se mover %d para cima\n",Torre);
        }

        if (Torre == Torremovimento)
        {
            printf("O Torre se movimenta %d casas para cima\n",Torremovimento);
        }

        Torre++;
    
    } while (Torre <= Torremovimento);
    
    
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
