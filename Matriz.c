#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
// recebe os numeros da matriz
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("digite os elementos da matriz: ");
            scanf("%d",&matriz[i][j]);

        }
    }
    printf("_____________________\n");
//Monta a matriz completa
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%2d ", matriz[i][j]);

        }
        printf("\n");        
    }
    printf("_____________________\n");
//mostra os elementos da diagonal secundaria
    printf("Elementos da diagonal secundaria: \n");
    for(i=0; i<4; i++){
        printf("%d ", matriz[i][4 - 1 - i]);
    }
    printf("\n");

    
}
