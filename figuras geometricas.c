#include <stdio.h>

int main() {

    int i, a, h, b;//Variáveis a serem utilizadas.
    char id;

    scanf("%c %d", & id, & h); //Leitura da altura e da forma.
    h++;//Neste programa o h recebe +1 unidade.

    if (h < 3) //Se altura for menor que 2 (h+1), a entrada é inválida.
    printf("entrada invalida\n");
    else if (id == 't' || id == 'T') { //Agora seguem if para cada forma. Esta é a do Triângulo.

        for (a = 0; a < (2 * h +1); a++) //Faz a primeira linha linha.
        printf(".");

        printf("\n");

        for (i = 1; i < h; i++) { //Cria a borda e os espaços da esquerda. 
            for (b = 0; b < h - i; b++)
            if (b == 0) printf(".");
            else printf(" ");

            for (a = 0; a < i; a++)//Preenche a forma.
            printf(" *");

            for (b = 0; b < h - i;b++)
            if (b == h - i-1) printf(" .");//Cria a borda e os espaços da direita.
            else printf(" ");

            printf("\n");
        }

        for (a = 0; a < (2 * h + 1); a++) //Última linha.
        printf(".");

        printf("\n");

    } else if (id == 'q' || id == 'Q') {//Forma Quadrado.

        for (a = 0; a < (2 * h) + 1; a++)//Desenha a primeira linha.
        printf(".");

        printf("\n");

        for (i = 1; i < h; i++) {

            for (a = 0; a < h + 1; a++) {
                if (a == 0) printf("."); else if(a == h) printf(" .");//Cria a borda e os espaços da esquerda, preenche o quadrado e cria a borda da direita.
                else printf(" *");
            }

            printf("\n");
        }
        for (a = 0; a < (2 * h) + 1; a++)//Última linha.
        printf(".");

        printf("\n");

    } else if ((id == 'l' || id == 'L') && (h % 2 == 0)) {//Forma do losango.

        for (a = 0; a < h + 3; a++) {//Desenha a primeira linha.
            printf(".");
        }

        printf("\n");

        for (i = 1; i < (h+1)/2 + 1; i++) {//Preenche a borda e o espaço da esquerda superior.

            for (b = 0; b < (h+1)/2-i+1;b++)
            if (b == 0) printf(".");
            else printf(" ");


            for (a = 1;(a - 1) < i; a++)//Preenche a forma da parte superior.
            printf(" *");

            for (b = 0; b < (h+1)/2-i+1;b++)//Preenche a borda e os espaços da direita.
            if (b == (h+1)/2-i) printf(" .");
            else printf(" ");

            printf("\n");
        }
        for (int i = (h-1)/2; i > 0; i--) {


            for (a = 0; a < (h +1)/2-i+1;a++)//Desenha a borda e os espaços da esquerda inferior.
            if (a == 0) printf(".");
            else printf(" ");

            for (a = 1; (a - 1) < i; a++)//Preenche a forma da parte inferior.
            printf(" *");

            for (a = 0; a < (h+1)/2-i+1; a++)//Desenha a borda e os espaços da direita.
            if (a == (h+1)/2-i) printf(" .");
            else printf(" ");

            printf("\n");
        }


        for (a = 0; a < h + 3; a++) {
            printf(".");
        }

        printf("\n");
    } else printf("entrada invalida\n");

    return 0;

}
