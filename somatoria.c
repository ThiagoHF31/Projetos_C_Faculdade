#include <stdio.h>
int main(){
    int num, i, soma, cont=0;
    printf("digite um numero: ");
    scanf("%d", &num);

    for(i=0; i<=num; i++){

        soma = i*(i+1);
        cont = soma + cont;
        //printf("%d", soma);
    }
    printf("A somatoria dos valores e: %d", cont);


}