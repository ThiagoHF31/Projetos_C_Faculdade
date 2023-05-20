#include <stdio.h>
int main(){
    float n1, n2, soma, sub, multi, divi;
    char opc;

    printf("digite um numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero: ");
    scanf("%f", &n2);

    
    printf("Escolha oque deseja fazer com eles\n");
    printf("[S] para somar\n[s] para subtrair\n[m] para multiplicar\n[d] para dividir\n");
    scanf("%s", &opc);


    if(opc == 'S'){
        soma = n1 + n2;
        printf("A soma dos numeros e: %.1f ", soma);
    }
    else if(opc == 's'){
        sub = n1 - n2;
        printf("A subtracao dos numeros e: %.1f ", sub);
    }
    else if(opc == 'm'){
        multi = n1 * n2;
        printf("A multiplicacao dos numeros e %.1f", multi);
    }
    else if(opc == 'd'){
        divi = n1 / n2;
        printf("A divisão dos numeros será %.1f", divi);
    }
    else{
        printf("Por favor digite um valor valido!");        
    }

    return 0;

}