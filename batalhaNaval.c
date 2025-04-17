#include <stdio.h>



// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][10] = {{0}};
    char coluna[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int coordenada1, coordenada2, coordenada3, coordenada4, coordenada5, coordenada6;
    int coordenada7, coordenada8, opcao, coord_ataque1, coord_ataque2;
    int i, j ;

    printf("Tabuleiro Batalha naval\n");
    printf(" ");
    
    for (int b = 0; b <10; b++){
        
    printf ("   %c", linha[b]);    
}
    printf("\n");
            
            for (int i = 0 ; i < 10 ; i++){
                printf ("%c",coluna[i]);
                for (int j = 0; j < 10 ;j++){
                    
                                       
                    printf("   %i",tabuleiro[i][j]);
                
                
            }
            printf("\n");
        }
        printf("\n");

        printf("Demonstração dos navios no tabuleiro\n");
        printf ("Escolha a coordenada onde você quer colocar o navio\n");
        printf ("Vamos colocar o Primeiro Navio na Horizontal \n");
        printf("A coordenada escolhida representa o centro do navio\n");
        printf ("Digite 1 numero de 0 a 9\n");
        scanf  ("%d",&coordenada1);
        printf ("Digite um numero de 1 a 8 sendo 1 = B e 9 = I no tabuleiro\n");
        scanf  ("%d", &coordenada2);
        printf ("Agora Vamos posicionar o segundo navio\n");
        printf ("Digite 1 numero de 0 a 9\n");
        scanf  ("%d", &coordenada3);
        printf ("Digite um numero de 1 a 8 sendo 1 = B e 8 = I no tabuleiro\n");
        scanf  ("%d", &coordenada4);
        printf ("Agora Vamos posicionar o primeiro navio na vertical\n");
        printf ("Digite 1 numero de 1 a 8\n");
        scanf  ("%d",&coordenada5);
        printf ("Digite um numero de 0 a 9 sendo 0 = A e 9 = j no tabuleiro\n");
        scanf  ("%d", &coordenada6);
        printf ("Agora Vamos posicionar o primeiro navio na vertical\n");
        printf ("Digite 1 numero de 1 a 8\n");
        scanf  ("%d",&coordenada7);
        printf ("Digite um numero de 0 a 9 sendo 0 = A e 9 = j no tabuleiro\n");
        scanf  ("%d", &coordenada8);
        printf("Tabuleiro Demonstração dos navios\n");

        printf(" ");
    
        for (int b = 0; b <10; b++){
            
        printf ("   %c", linha[b]);    
    }
        printf("\n");
                
                for (int i = 0 ; i < 10 ; i++){
                    printf ("%c",coluna[i]);
                    for (int j = 0; j < 10 ;j++){
                        tabuleiro[coordenada1][coordenada2-1]=3;
                        tabuleiro[coordenada1][coordenada2]=3;
                        tabuleiro[coordenada1][coordenada2+1]=3;
                        tabuleiro[coordenada3][coordenada4-1]=3;
                        tabuleiro[coordenada3][coordenada4]=3;
                        tabuleiro[coordenada3][coordenada4+1]=3;
                        tabuleiro[coordenada5-1][coordenada6]=3;
                        tabuleiro[coordenada5][coordenada6]=3;
                        tabuleiro[coordenada5+1][coordenada6]=3;
                        tabuleiro[coordenada7-1][coordenada8]=3;
                        tabuleiro[coordenada7][coordenada8]=3;
                        tabuleiro[coordenada7+1][coordenada8]=3;
                                           
                        printf("   %i",tabuleiro[i][j]);
                    
                    
                }
                printf("\n");
            }
            printf("\n");

        
        printf("Agora vamos testar o Super poder\n");
        printf("Tabuleiro Demonstração do super poder\n");

        for(i = 0 ; i<10; i++){
            for(j=0; j<10; j++){
                tabuleiro[i][j] = 0;
            }
        }
        

        for (int b = 0; b <10; b++){
        
            printf ("   %c", linha[b]);    
        }
            printf("\n");
                    
                    for (int i = 0 ; i < 10 ; i++){  
                        printf ("%c",coluna[i]);                    
                        for (int j = 0; j < 10 ;j++){
                            if (i==3 && j >3 && j < 9){
                                tabuleiro [i][j] = 1;
                                                        
                            } if (i==2 && j > 4 && j <8){
                                tabuleiro [i][j] = 1;
                                } if (i==1 && j == 6){
                                    tabuleiro [i][j] = 1;  
                                }

                                if (i==8 && j>=0 && j<3){
                                    tabuleiro[i][j] = 2;
                                } if (i==7 && j==1){
                                    tabuleiro[i][j] = 2;
                                } if (i==9 && j==1){
                                    tabuleiro[i][j] = 2;
                                }  if (i==6 && j>3 && j<9){
                                    tabuleiro[i][j] = 4;
                                }if (i==5 && j==6){
                                    tabuleiro[i][j] = 4;
                                }if (i==7 && j==6){
                                    tabuleiro[i][j] = 4;
                                } if (i==4 && j==6){
                                    tabuleiro[i][j] = 4;
                                }if (i==8 && j==6){
                                    tabuleiro[i][j] = 4;
                                }
                               
                            
                            
                            
                                               
                            printf("   %i",tabuleiro[i][j]);
                        
                        
                    } 
                    printf("\n");
                    
                }

                for(i = 0 ; i<10; i++){
                    for(j=0; j<10; j++){
                        tabuleiro[i][j] = 0;
                    }
                }
                

        printf ("Escolha a coordenada onde você quer colocar o navio\n");
        printf ("Vamos colocar o Primeiro Navio na Horizontal \n");
        printf("A coordenada escolhida representa o centro do navio\n");
        printf ("Digite 1 numero de 0 a 9\n");
        scanf  ("%d",&coordenada1);
        printf ("Digite um numero de 1 a 8 sendo 1 = B e 9 = I no tabuleiro\n");
        scanf  ("%d", &coordenada2);
        printf ("Agora Vamos posicionar o segundo navio\n");
        printf ("Digite 1 numero de 0 a 9\n");
        scanf  ("%d", &coordenada3);
        printf ("Digite um numero de 1 a 8 sendo 1 = B e 8 = I no tabuleiro\n");
        scanf  ("%d", &coordenada4);
        printf ("Agora Vamos posicionar o primeiro navio na vertical\n");
        printf ("Digite 1 numero de 1 a 8\n");
        scanf  ("%d",&coordenada5);
        printf ("Digite um numero de 0 a 9 sendo 0 = A e 9 = j no tabuleiro\n");
        scanf  ("%d", &coordenada6);
        printf ("Agora Vamos posicionar o primeiro navio na vertical\n");
        printf ("Digite 1 numero de 1 a 8\n");
        scanf  ("%d",&coordenada7);
        printf ("Digite um numero de 0 a 9 sendo 0 = A e 9 = j no tabuleiro\n");
        scanf  ("%d", &coordenada8);

                      
                    for (int i = 0 ; i < 10 ; i++){
                        printf ("%c",coluna[i]);
                        for (int j = 0; j < 10 ;j++){
                            tabuleiro[coordenada1][coordenada2-1]=3;
                            tabuleiro[coordenada1][coordenada2]=3;
                            tabuleiro[coordenada1][coordenada2+1]=3;
                            tabuleiro[coordenada3][coordenada4-1]=3;
                            tabuleiro[coordenada3][coordenada4]=3;
                            tabuleiro[coordenada3][coordenada4+1]=3;
                            tabuleiro[coordenada5-1][coordenada6]=3;
                            tabuleiro[coordenada5][coordenada6]=3;
                            tabuleiro[coordenada5+1][coordenada6]=3;
                            tabuleiro[coordenada7-1][coordenada8]=3;
                            tabuleiro[coordenada7][coordenada8]=3;
                            tabuleiro[coordenada7+1][coordenada8]=3;
                        }
                        printf("\n");
                    }
                    printf("\n");                        

        printf("Escolha agora a qual super poder você vai querer utilizar \n");
        printf("A coordenada de Ataque representa o centro do ataque \n");
        printf("Digite 1 para usar o Triangulo \n ");
        printf("Digite 2 para a Cruz \n");
        printf("Digite 3 para o Losangulo \n");
        scanf("%d", &opcao);


        switch (opcao){
            case 1 :
            printf("Voce escolheu o Triangulo\n");
            printf("Escolha a 1 coordenada \n ");
            printf("Escolha um numero de 0 a 9 \n");
            scanf("%d", &coord_ataque1);
            printf ("Digite um numero de 0 a 9 sendo 0 = A e 9 = j no tabuleiro\n");
            scanf("%d", &coord_ataque2);
            if (tabuleiro [coord_ataque1 -1] [coord_ataque2] == 3 || tabuleiro [coord_ataque1][coord_ataque2+-1] ==3 || tabuleiro[coord_ataque1+1][coord_ataque2+-2]==3){
                printf("Voce ganhou 'Acertou o Navio'\n");
                } else {
                    printf("Voce perdeu 'Acertou a agua'\n");
                }
           


                printf("Tabuleiro Batalha naval\n");
                printf(" ");
                
                for (int b = 0; b <10; b++){
                    
                printf ("   %c", linha[b]);    
            }
                printf("\n");
                        
                        for (int i = 0 ; i < 10 ; i++){
                            printf ("%c",coluna[i]);
                            for (int j = 0; j < 10 ;j++){
                                
                                                   
                                printf("   %i",tabuleiro[i][j]);
                            
                            
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
                } 
       
    

    //for (int a = 0; a < 10; a++){
        
       // for (int i = 0; i < 10; i++){
         //   for (int j = 0 ; j < 10 ;j++){

               // printf ("%c  %d", coluna[i], tabuleiro[i][j]);
                //printf ("\n");
            //} printf ("\n");
           
        //}
   
        
    //}
    
    
        
    
    

    

   






    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
