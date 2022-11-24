#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int nivel, facil=0, medio=0, dificil=0;
    char resposta, inicio;
    char nome [30], certa='s';
    

    
  printf("============================================================================================================\n");
    printf("                         Sejam bem vindos ao Quiz da Copa do Mundo!\n");
    printf("============================================================================================================\n");

        printf("\nMe diga seu nome e poderemos começar!\n");
        printf("\nSeu nome: ");
    gets(nome);
    system("clear");
    printf("Olá %s", nome);
         printf("\n============================================================================================================\n");
    printf("\nEste quiz possui 3 dificuldades com 5 perguntas cada uma\n");
    printf("cada pergunta possui apenas uma resposta certa então\n");
    printf("escolha sabiamente suas respostas!\n");
    printf("\n============================================================================================================\n");
    printf("Pressione Enter e podemos continuar: ");
    getchar();
    system("clear");

    Niveis:
    printf("*************************\n");
    printf("||       Niveis        ||\n");
    printf("||     1 - Facil       ||\n");
    printf("||     2 - Médio       ||\n");
    printf("||     3 - Dificil     ||\n");
    printf("*************************\n");

    printf("Em qual nivel você deseja jogar?\n");
    scanf("%d", &nivel);
    system("clear");

    switch(nivel)
        {
            case 1:
                {
    system("clear");
            printf("===================================================================================================\n");
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                            SEJA BEM VINDO AO NIVEL FACIL!                                       |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("|                                                                                                 |\n");   
            printf("===================================================================================================\n");

            printf("                   No nivel \"1\", cada resposta certa vale 1 ponto!\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
                    





                    
                }










            
        }












































    
  return 0;
}