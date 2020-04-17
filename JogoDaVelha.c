#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//essa struct é responsavel por guardar os nicknames dos jogadores
struct cadastro { 
    char jogador1 [21];
    char jogador2 [21];
}jogador;

struct JogoDaVelha{
    char velha [3][3];/*     1   2   3
                       \t 1    |   |  
                       \t   ———+———+———
                       \t 2    |   |
                       \t   ———+———+———
                       \t 3    |   |     sei que começa com 0, mas irei somar 1 
                                        ao valor de i nos ciclos*/
    
}jogo;


//Imprime o menu inicial
void menuInicial (void){

    printf("********JOGO DA VELHA********\n\n");
    printf("DIGITE UM OPCAO PARA CONTINUAR \n\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Sair do jogo\n\n");
    printf("******************************\n");
}
// Cadastra os 2 jogadores, usando a struct cadastro 
void cadastrarJogadores (void){

    printf("Digite o nickname do jogador 1 [com no max 20 caracteres]\n");
    scanf (" %s", &jogador.jogador1);
    printf("<<<<<<<CADASTRO REALIZADO>>>>>>>\n");
    system ("pause");
    system ("cls");
    printf("Digite o nickname do jogador 2 [com no max 20 caracteres]\n");
    scanf (" %s", &jogador.jogador2);
    printf("<<<<<<<CADASTRO REALIZADO>>>>>>>\n");
    system ("pause");
    system ("cls");

}


int validarvitoria (char velha [3][3]){
        if((velha[0][0]=='x')&&(velha[0][1]=='x')&&(velha[0][2]=='x')){
			return 1;}
		if((velha[1][0]=='x')&&(velha[1][1]=='x')&&(velha[1][2]=='x')){
			return 1;}
		if((velha[2][0]=='x')&&(velha[2][1]=='x')&&(velha[2][2]=='x')){
			return 1;}
		if((velha[0][0]=='x')&&(velha[1][0]=='x')&&(velha[2][0]=='x')){
			return 1;}
		if((velha[0][1]=='x')&&(velha[1][1]=='x')&&(velha[2][1]=='x')){
			return 1;}
		if((velha[0][2]=='x')&&(velha[1][2]=='x')&&(velha[2][2]=='x')){
			return 1;}
		if((velha[0][0]=='x')&&(velha[1][1]=='x')&&(velha[2][2]=='x')){
			return 1;}
		if((velha[0][2]=='x')&&(velha[1][1]=='x')&&(velha[2][0]=='x')){
			return 1;}
		if((velha[0][0]=='o')&&(velha[0][1]=='o')&&(velha[0][2]=='o')){
			return -1;}
		if((velha[1][0]=='o')&&(velha[1][1]=='o')&&(velha[1][2]=='o')){
			return -1;}
		if((velha[2][0]=='o')&&(velha[2][1]=='o')&&(velha[2][2]=='o')){
			return -1;}
		if((velha[0][0]=='o')&&(velha[1][0]=='o')&&(velha[2][0]=='o')){
			return -1;}
		if((velha[0][1]=='o')&&(velha[1][1]=='o')&&(velha[2][1]=='o')){
			return -1;}
		if((velha[0][2]=='o')&&(velha[1][2]=='o')&&(velha[2][2]=='o')){
			return -1;}
		if((velha[0][0]=='o')&&(velha[1][1]=='o')&&(velha[2][2]=='o')){
			return -1;}
		if((velha[0][2]=='o')&&(velha[1][1]=='o')&&(velha[2][0]=='o')){
			return -1;}
            else { return 0; 
            };
}

void imprimirjogo (char velha [3][3]){
                     printf("  \t    1   2   3  \n");
                     printf("  \t 1  %c | %c | %c\n", velha[0][0],velha[0][1],velha[0][2]);
                     printf("  \t   ---+---+---\n");
                     printf("  \t 2  %c | %c | %c\n",velha[1][0],velha[1][1],velha[1][2]);
                     printf("  \t   ---+---+---\n");
                     printf("  \t 3  %c | %c | %c\n", velha[2][0],velha[2][1],velha[2][2]);
}

void andamentodojogo (char velha [3][3], int a, char b){
    int l, c;
    void imprimirjogo (char velha [3][3]);
    imprimirjogo (jogo.velha[l][c]);
    if (a == 1 && b == 'x'){
        printf("Escolha uma linha para jogar %s", jogador.jogador1);
        scanf ("%d", &l);
        printf("Escolha uma coluna para jogar %s", jogador.jogador1);
        scanf ("%d", &c);
        jogo.velha [l][c] == 'x';
        imprimirjogo (jogo.velha[l][c]);
        
    }


}

 
int main (void){
    int opcao; //irá guardar o numero da opção escolhida 
    int a;
    char b;
    void menuInicial (void); 
    void cadastrarJogadores (void);
    void imprimirjogo (char velha [3][3]);
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
         case 1 ://iniciar jogo
           system ("cls");
           cadastrarJogadores ();//chama a funcao cadastrar jogadores
            system ("cls");
           /* strcmp e usado para comparar strings, 
           caso o valor seja = 0 as strings sao iguais, caso o valor seja menor que 0
           a string 1 é menor que a string 2 e caso o valor seja maior que 0 a stringa
           1 é maior que a string 2 */
           int x = strcmp (jogador.jogador1, jogador.jogador2);
           // Este ciclo for tem a funcao de n deixar ser cadastrados 2 nicknames iguais 
            for ( ; x == 0 ; ){
                printf ("Os nicknames cadastrados sao iguais, cadastre-os novamente\n");
                system ("pause");
                system ("cls");
                main ();
           }
           printf ("Quem vai comecar o jogo ? <%s-1> ou <%s-2>\n", jogador.jogador1 , jogador.jogador2);
           scanf (" %d", &a);
           if (a == 1){
              printf("ok, o %s ira comecar jogando, mas antes escolha entre <x> e <o>\n", jogador.jogador1);
              scanf(" %c", &b);
           } if (a == 2){
              printf ("ok, o %s ira comecar jogando, mas antes escolha entre <x> e <o>\n", jogador.jogador2);
               scanf(" %c", &b);
           }
           printf ("%d , %c\n", a, b);
        
           system("pause");
           break;
           case 2 : // sair do jogo 
           system("cls");
           system("pause");
           break;
           default:
           break;
           }
    

 

return 0;
}
