#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiros[20][10];

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            inteiros[i][j] = 0;
        }
        
    }

    printf("Imprimindo Matriz do Desafio\n\n");

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            printf("%d", inteiros[i][j]);
        }
        printf("\n");
    }    
    
    printf("\n\nImprimindo tabuleiro\n");

    char tabuleiro[3][3+1];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = '0';
        }
        
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            // if (strl(tabuleiro[j]) == 2)
            // {
            //     printf("%c", tabuleiro[i][j]);
            // }
            printf("%c%c", tabuleiro[i][j], '|');
        }
        printf("\n");
    }
    
    

}
