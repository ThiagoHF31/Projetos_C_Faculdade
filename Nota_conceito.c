#include <stdio.h>
 int main(){
    float n1;
    int conceito;

    printf("digite a nota: ");
    scanf("%f", &n1);

    if(n1 >= 9 && n1 <= 10){
        conceito = "A";
        printf("Nota = %.1f\nCONCEITO = %s", n1, conceito);
    }
    else if(n1>= 7.5 && n1 < 9){
        conceito = "B";
        printf("Nota = %.1f\nCONCEITO = %s", n1, conceito);
    }
    else if(n1 >=6 && n1 < 7.5){
        conceito = "C";
        printf("Nota = %.1f\nCONCEITO = %s", n1, conceito);
    }
    else if(n1 < 6){
        conceito = "D";
        printf("Nota = %.1f\nCONCEITO = %s", n1, conceito);
    }

    
    return 0;
 }
