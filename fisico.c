#include <stdio.h>

int main() {
    char atividade;
    float peso;
    int caminhada = 0, natacao = 0, danca = 0, bike = 0;
    float peso_danca = 0;
    int total = 0;

    while (1) {
        printf("\nPara finalizar o programa escreva [2K]\n");
        printf("Insira o peso da pessoa (em kg)\n");
        printf("E o tipo de atividade fisica:\n[C] caminhada\n[N] natacao\n[D] danca\n[B] bike\nseparados por um espaco:\n ");
        scanf("%f %c", &peso, &atividade);
        printf("\n.\n");

        if (atividade == 'C') {
            caminhada++;
        } 
        else if (atividade == 'N') {
            natacao++;
        } 
        else if (atividade == 'D') {
            danca++;
            peso_danca += peso;
        } 
        else if (atividade == 'B') {
            bike++;
        } 
        else {
            break;
        }

        total++;

    }

    printf("Quantidade de pessoas que caminham: %d\n", caminhada);
    printf("Quantidade de pessoas que nadam: %d\n", natacao);
    printf("Media dos pesos das pessoas que dancam: %.2f\n", peso_danca / danca);
    printf("Porcentagem de pessoas que andam de bicicleta dentre todas as pessoas analisadas: %.2f%%\n", (float) bike / total * 100);

    return 0;
}