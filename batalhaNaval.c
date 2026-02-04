#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    //Definição de variáveis
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    //Criando tabuleiro matriz 10 x 10
    int tabuleiro[10][10] ={0};
    int navio[3]= {3,3,3};
    int somadiagonal[10][10];


    // Exibição dos tabueiros
    printf("Tabuleiro de Batalha Naval\n");
    printf("\n");
 
    //Tabuleiro Colunas A até J
    printf(" ");//espaço para alinhamento da coluna Y
    for(int i = 0;i< 10;i++){
        printf(" %c", coluna[i]);
    }   

    //Navio 1 Vertical
          for (int i = 0; i < 3; i++){
            for(int j = 6; j < 7; j++){
             tabuleiro[i][j] = 3;
            }
        
    }

     //Navio 2 Horizontal
          for (int i = 6; i < 7; i++){
            for(int j = 2; j < 5; j++){
             tabuleiro[i][j] = 3;
            }
        
    }
    
    //Navio diagonal 1
     for(int i = 1, j = 3; i < 3, j > 0 ; i++,j--){
        somadiagonal[i][j] = i + j;
             tabuleiro[i ][j ] = 3;  
        }

        //Navio diagonal 2
         for(int i = 5, j = 5; i < 8, j < 8; i++,j++){
            tabuleiro[i ][j ] = 3;  
        }
    


    //Tabuleiro Linhas 1 até 10
        for(int i = 0; i< 10; i++){
        printf("\n");
         printf("%d ", i + 1 );

         for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]); 
         }
        }
        
        return 0;
    
        }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

