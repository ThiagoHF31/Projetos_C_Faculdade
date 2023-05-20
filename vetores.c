#include <stdio.h>
int main(){
    int i, matriculas[100], posicao;
    float nota[100];
    float maior; 
    
// armazena a matricula e a nota
    for(i=0; i < 100; i++)
    {
        printf("matricula: ");
        scanf("%d", &matriculas[i]);
//pegar notas entre 0 e 10
        do{
            printf("nota: ");
            scanf("%f", &nota[i]);
            if(nota[i]<0 || nota[i] > 10){
                printf("A nota deve ser entre 0 e 10, digite novamente.\n");
                
            }
        }while(nota[i] < 0 || nota[i] > 10);

    }

// encontra a maior nota e matricula da maior nota
    maior = nota[0];
    posicao = 0;
    for(i = 1; i < 100; i++)
    {
        if(nota[i] > maior){
            maior = nota[i]; 
            posicao++;           
        }      
    }
    printf("_____________________________________\n");
    printf("A maior nota e: %.2f\n", maior);
    printf("Matricula: %d\n", matriculas[posicao]);
 
}