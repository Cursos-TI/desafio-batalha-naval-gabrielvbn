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
            for (int i = 0; i <= 2; i ++){ //Posicionando o primeiro ataque (cone) representado pelo numero 1
                for (int j = 2 - i ; j <=2 ; j++ ){
             tabuleiro [i] [j] = 1;
                }
            }
                 for (int i = 2 ; i > 0 ; i--){
                    for (int j = 2 + i ;j > 2 ; j--)
                    tabuleiro [i] [j] = 1 ;
            }
            for (int i = 8 ; i > 7 ; i--){ // Posicionando o segundo ataque (cruz) representado pelo numero 2
                for (int j = 5 ; j < 10 ; j++)
                tabuleiro [i] [j ] = 2 ;
            }
                    for (int i = 9 ; i > 6 ; i--){
                        for (int j = 7 ; j > 6 ; j--)
                        tabuleiro [i] [j ] = 2 ;
                    }
             for (int i = 6 ; i > 5 ; i--){ // Posicionando o terceiro ataque (octaedro) representado pelo numero 3
                for (int j = 0 ; j < 3 ; j++)
                tabuleiro [i] [j ] = 3 ;
            }
                    for (int i = 7 ; i > 4 ; i--){
                        for (int j = 1 ; j > 0 ; j--)
                        tabuleiro [i] [j ] = 3 ;
                    }
            
        
           
           

            printf (" %d" , tabuleiro [i] [j]); //Imprime o tabuleiro na tela
           
                   
        }
              
    
        printf ("\n");
       
    
    }
    




return 0;
}