#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//essa struct é responsavel por guardar os nicknames dos jogadores
struct cadastro { 
    char jogador1 [21];
    char jogador2 [21];
}jogador;

//Imprime o menu inicial
void menuInicial (void){

    printf("********JOGO DA VELHA********\n\n");
    printf("DIGITE UM OPCAO PARA CONTINUAR \n\n");
    printf("1 - CADASTRAR 2 JOGADORES \n");
    printf("2 - Iniciar Jogo\n");
    printf("3 - Sair do jogo\n\n");
    printf("******************************\n");
}
// Cadastra os 2 jogadores, usando a struct cadastro 
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
    
    /* Esse ciclo tem a funcao de tornar invalida qualquer escolha 
    de opcao que nao esta no menu */
    for ( ; opcao != 1 && opcao != 2 && opcao != 3 ; )
    {   system ("cls");
        printf ("\nOPCAO INVALIDA\n");
        menuInicial();
        scanf ("%d", &opcao);
    }
    /*  Switch Case e algo muito util pasa se usar em menus,
        cada opcao ira levar a um caminho a ser seguido pelo programa */
        switch (opcao)
        {
         case 1 :// Cadastrar 2 jogadores 
           system ("cls");
           cadastrarJogadores ();
           printf ("o nome do jogador 1 eh %s\n", jogador.jogador1);
           printf ("o nome do jogador 2 eh %s\n", jogador.jogador2);
            system ("pause");
            system ("cls");
           /* strcmp e usado para comparar strings, 
           caso o valor seja = 0 as strings sao iguais, caso o valor seja menor que 0
           a string 1 é menor que a string 2 e caso o valor seja maior que 0 a stringa
           1 é maior que a string 2 */
           int x = strcmp (jogador.jogador1, jogador.jogador1);
           printf ("%d\n", x);
           system ("pause");
            system ("cls");

           // Este ciclo for tem a funcao de n deixar se cadastrados 2 nicknames iguais 
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
