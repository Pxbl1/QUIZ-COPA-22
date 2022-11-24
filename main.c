#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int nivel, facil=0, medio=0, dificil=0;
    int alt1=1, alt2=1, alt3=1;
    int corr1=0, corr2=0, corr3=0;
    int err1=0, err2=0, err3=0;
    int total1=1, total2=1, total3=1;
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

         printf("=======================================================================\n"); 
         printf("                    Pergunta de numero %.2d - Facil                    \n", alt1++);
         printf("=======================================================================\n");       
         printf("1-Qual o nome do mascote da Copa do Mundo FIFA de 2014?\n\n");  
          
                    printf("A) Amijubi\n");
                    printf("B) Zakumi\n");
                    printf("C) Fuleco\n");
                    printf("D) Pererê\n");        
                    printf("Qual a alternativa certa?\n");
                    scanf("%s", &resposta);

                    if ((resposta== 'C') || (resposta== 'c')){
                        printf("Você acertou!!\n");
                        corr1++;
                        
                    }
                        else {
                            printf("Você errou! :(\n");
                            printf("A alternativa correta é a \"c\"\n ");
                            err1++;
                            
                        }

            printf("=======================================================================\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
                    printf("=======================================================================\n"); 
         printf("                    Pergunta de numero %.2d - Facil                    \n", alt1++);
         printf("=======================================================================\n");       
         printf("2-O mascote da Copa de 2014 é um:\n\n");
                 
                    
         printf("Qual a alternativa certa?\n");
         scanf("%s", &resposta);

                    if ((resposta == 'C') || (resposta = 'c')){
                        printf("Você acertou!!\n");
                        corr1++;
                        
                    }
                        else {
                            printf("Você errou! :(");
                            printf("A alternativa correta é a \"c\"\n ");
                            err1++;
                            
                        }

            printf("=======================================================================\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
                     printf("=======================================================================\n"); 
         printf("                    Pergunta de numero %.2d - Facil                    \n", alt1++);
         printf("=======================================================================\n");       

         printf("Qual a alternativa certa?\n");
         scanf("%s", &resposta);

                    if ((resposta == 'c') || (resposta = 'c')){
                        printf("Você acertou!!\n");
                        corr1++;
                        
                    }
                        else {
                            printf("Você errou! :(");
                            printf("A alternativa correta é a \"\"\n ");
                            err1++;
                            
                        }

            printf("=======================================================================\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
                     printf("=======================================================================\n"); 
         printf("                    Pergunta de numero %.2d - Facil                    \n", alt1++);
         printf("=======================================================================\n");       

         printf("Qual a alternativa certa?\n");
         scanf("%s", &resposta);

                    if ((resposta == 'c') || (resposta = 'c')){
                        printf("Você acertou!!\n");
                        corr1++;
                        
                    }
                        else {
                            printf("Você errou! :(");
                            printf("A alternativa correta é a \"\"\n ");
                            err1++;
                            
                        }

            printf("=======================================================================\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
                     printf("=======================================================================\n"); 
         printf("                    Pergunta de numero %.2d - Facil                    \n", alt1++);
         printf("=======================================================================\n");       

         printf("Qual a alternativa certa?\n");
         scanf("%s", &resposta);

                    if ((resposta == 'c') || (resposta = 'c')){
                        printf("Você acertou!!\n");
                        corr1++;
                        
                    }
                        else {
                            printf("Você errou! :(");
                            printf("A alternativa correta é a \"\"\n ");
                            err1++;
                            
                        }

            printf("=======================================================================\n");
            getchar();
            printf("\nPressione Enter e podemos continuar:");
            getchar();
            system("clear");
            printf("Você concluiu este nivel!\n");
            printf("Deseja se aventurar em outra dificuldade? (s/n)\n");
            scanf("%s", &resposta);
              if ((resposta== 's')|| (resposta== 'S')) {
            system("clear");
                  total1=alt1;
                  alt1=1;
                     
            goto Niveis;
                  
                  
              }     

break;





                    
                }










            
        }












































    
  return 0;
}