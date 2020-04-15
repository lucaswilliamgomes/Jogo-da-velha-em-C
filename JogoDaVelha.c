#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char jogador1 [21];
    char jogador2 [21];
}jogador;


void menuInicial (void){

    printf("********JOGO DA VELHA********\n\n");
    printf("DIGITE UM OPCAO PARA CONTINUAR \n\n");
    printf("1 - CADASTRAR 2 JOGADORES \n");
    printf("2 - Iniciar Jogo\n");
    printf("3 - Sair do jogo\n\n");
    printf("******************************\n");
}

void cadastrarJogadores (void){

    printf("Digite o nickname do jogador 1 [com no max 20 caracteres]\n");
    scanf (" %s", &jogador.jogador1);
    system ("cls");
    printf("Digite o nickname do jogador 2 [com no max 20 caracteres]\n");
    scanf (" %s", &jogador.jogador2);
    system ("cls");

}

  
int main (void){
    int opcao; //irá guardar o numero da opção escolhida 
    void menuInicial (void); 
    void cadastrarJogadores (void);
    menuInicial();

    scanf ("%d", &opcao);

    for ( ; opcao != 1 && opcao != 2 && opcao != 3 ; )
    {   system ("cls");
        printf ("\nOPCAO INVALIDA\n");
        menuInicial();
        scanf ("%d", &opcao);
    }
        switch (opcao)
        {
         case 1 :
           system ("cls");
           cadastrarJogadores ();
           printf ("o nome do jogador 1 eh %s\n", jogador.jogador1);
           printf ("o nome do jogador 2 eh %s\n", jogador.jogador2);
            system ("pause");
            system ("cls");
           
           int x = strcmp (jogador.jogador1, jogador.jogador1);
           printf ("%d\n", x);
           system ("pause");
            system ("cls");

           
            for ( ; x == 0 ; ){
                printf ("Os nicknames cadastrados sao iguai, cadastre-os novamente\n");
                system ("pause");
                system ("cls");
                cadastrarJogadores ();
                int x = strcmp (jogador.jogador1, jogador.jogador1);
           }
            

           system("pause");
                   
           break;
           case 2 :
           printf("\nopcao 2\n");//inicar jogo 
           system("pause");
           break;
           case 3 :
           system("pause");
           break;
           default:
           break;
           }
    

 

return 0;
}
