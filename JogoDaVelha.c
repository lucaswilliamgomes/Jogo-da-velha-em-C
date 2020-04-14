#include <stdio.h>
#include <stdlib.h>

void menuInicial (void){

    printf("********JOGO DA VELHA********\n\n");
    printf("DIGITE UM OPCAO PARA CONTINUAR \n\n");
    printf("1 - CADASTRAR 2 JOGADORES \n");
    printf("2 - Iniciar Jogo\n");
    printf("3 - Sair do jogo\n\n");
    printf("******************************\n");
}



int main (void){
    int opcao;
    void menuInicial (void);
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
           printf("\nopcao 1\n");
           system("pause");
           break;
           case 2 :
           printf("\nopcao 2\n");
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