#include <stdio.h>

//Tamanho do tabuleiro (Matriz)
#define linhas 10
#define colunas 10

int main() {

//Criacao do tabuleiro matrix 10 x 10 definido anteriormente   
    int tabuleiro [linhas] [colunas] ;
    int linha = 1 ;
   

    printf("*****BATALHA NAVAL*****\n");//Imprime o nome do jogo
    printf("  ");//Espaço para organizar melhor as letras
    for (char i = 'A' ; i <= 'J' ; i++){ // Loop For para impressão das letras que organizam a coluna
    
       printf ("%2c" , i); 
    }
    printf ("\n");
    

    for (int i = 0; i < linhas; i++){  //Loop for para inicialização em 0 = agua
        printf ("%2d" , linha++);
        for (int j = 0; j < colunas; j++){
            tabuleiro [i] [j] = 0 ; // Inicializando em 0
            for (int i = 0; i < 1; i ++){ //Posicionando o primeiro navio em E1, F1 e G1
                for (int j = 4 ; j < 7 ; j++ ){
             tabuleiro [i] [j] = 3;
                }
            }
            for (int i = 1; i < 4; i ++){ //Posicionando o segundo navio em B2, B3 e B4
                for (int j = 1 ; j < 2 ; j++ ){
             tabuleiro [i] [j] = 3;
                }
            }
           if (i == j){ //Posicionando o Terceiro navio em H8 , I9 e j10
            for (int i = 7 ; i <= 9; i ++ ){
            tabuleiro [i] [j] = 3 ;
            }
                }

            if ( i + j == 8){ //Posicionando o Quarto navio em D6 , C7 e B8
            for (int i = 7 ; i > 4 ; i -- ){
            tabuleiro [i] [j] = 3 ;
            }
                }
           

            printf (" %d" , tabuleiro [i] [j]); //Imprime o tabuleiro na tela
           
                   
        }
              
    
        printf ("\n");
       
    
    }
    




return 0;
}