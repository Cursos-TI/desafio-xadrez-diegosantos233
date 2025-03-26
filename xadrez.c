#include <stdio.h>

    int main() {
    
        // declarando as variáveis do Bispo
        
        int Bispo = 1;
        int Bispomovimenta = 0;

        // explicando a movimentação do Bispo

        printf("No xadrez, o bispo se movimenta em diagonal, \nquantas casas quiser, \nmas apenas em um sentido.\n\n");

        // entrada de dados do Bispo

        printf ("Quantas casas você que movimenta o bispo\n");
        printf ("digite aqui:");
        scanf ("%d",&Bispomovimenta);

        // movimentação do Bispo

        while (Bispo <= Bispomovimenta)
        {
            if(Bispo <= Bispomovimenta){
    
                printf("Bispo %d casas na diagonal superior direita\n",Bispo);
            
            }
            if (Bispo >= Bispomovimenta)
            {
                printf("A movimentação do Bispo foi concluída\n\n");
            }
        
            Bispo++;
        }

        // declarando as variáveis do Torre

        int Torre = 1;
        int Torremovimenta = 0;


        // explicando a movimentação do Torre

        printf("No xadrez, a torre pode se mover em linha reta, \nhorizontalmente ou verticalmente, quantas casas quiser, \ndesde que não haja peças no caminho.\n\n");
        
        // entrada de dados do Torre

        printf ("Quantas casas você que movimenta a Torre\n");
        printf ("digite aqui:");
        scanf ("%d",&Torremovimenta);

        // movimentação do Torre

        do
        {
            if (Torre <= Torremovimenta){
            
                printf("Torre: %d casas para a direita\n",Torre);
            }

            if (Torre >= Torremovimenta)
            {
                printf("A movimentação da Torre foi concluída\n\n");
            }
            
            Torre++;
        } while (Torre <= Torremovimenta);
        
        
        // declarando as variáveis do Rainha

        int Rainha = 1;
        int Rainhamovimenta = 0;


        // explicando a movimentação do Rainha

        printf("No xadrez, a rainha, também conhecida como dama, \npode se mover em qualquer direção, \nhorizontal, vertical ou diagonal, \nquantas casas quiser, desde que não haja peças bloqueando.\n\n");
        
        // entrada de dados do Rainha

        printf ("Quantas casas você que movimenta a Rainha\n");
        printf ("digite aqui:");
        scanf ("%d",&Rainhamovimenta);

        // movimentação do Rainha

        for (Rainha; Rainha <= Rainhamovimenta; Rainha++){
            
            if (Rainha <= Rainhamovimenta){
                
                    printf("Rainha: %d casas para a esquerda\n",Rainha);
                
            }

            if (Rainha >= Rainhamovimenta){

                printf("A movimentação da Rainha foi concluída\n\n");
            }
        
    
        }
        

        
    return 0;
}
