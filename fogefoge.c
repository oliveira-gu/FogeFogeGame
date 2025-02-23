#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

int acabou(){
    return 0;
}

int ehdirecao(char direcao){
    return direcao == ESQUERDA ||
        direcao == CIMA ||
        direcao == BAIXO ||
        direcao == DIREITA;
}

void move(char direcao){
    
    if(!ehdirecao(direcao))
        return;

    int proximox = heroi.x;
    int proximoy = heroi.y;

    switch (direcao) {
        case ESQUERDA:
            proximoy--;
            break;
        case CIMA:
            proximox--;
            break;
        case DIREITA:
            proximoy++;
            break;
        case BAIXO:
            proximox++;
            break;
    }

    if(!valida(&m, proximox, proximoy))
        return;

    if (!vazia(&m, proximox, proximoy))
        return;

    andanomapa(&m, heroi.x, heroi.y,
         proximox, proximoy);
    
    heroi.x = proximox;
    heroi.y = proximoy;
    
}

int main(){

    lemapa(&m);
    encontramapa(&m, &heroi, HEROI);

    do {

        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);

    } while (!acabou());
    
    liberamapa(&m);
    
}