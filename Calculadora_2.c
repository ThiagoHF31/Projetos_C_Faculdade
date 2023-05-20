#include <stdio.h>
int main(){
    float n1, n2;
    char opc;

    printf("digite dois numeros:\n ");
    scanf("%f %f", &n1, &n2);

    printf("Escolha oque deseja fazer com eles\n");
    printf("[S] para somar\n[s] para subtrair\n[m] para multiplicar\n[d] para dividir\n");
    scanf("%s", &opc);

    switch(opc){
        case 'S':
        printf("%.1f", n1+n2);
        break;

        case 's':
        printf("%.1f", n1-n2);
        break;

        case'm':
        printf("%.1f", n1*n2);
        break;

        
        case'd':
        printf("%.1f", n1/n2);
        break;
    }
    return 0;
    
}