#include <stdio.h>
#include <math.h>

int main(){
	/*Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua 
	aceleração (m/s2) e o tempo (s) que levou do repouso ate? a decolagem. 
	O programa deve calcular e escrever a velocidade atingida (Km/h), o espaço 
	percorrido na pista (m) e o trabalho mecânico realizado (J) no momento da 
	decolagem. */
	
    float massa, aceleracao, tempo , velocidade, velo_final,massa2;
    double comp_pista,trabalho;
    
    printf("Massa: ");
    scanf("%f",&massa);
    printf("aceleracao: ");
    scanf("%f",&aceleracao);
    printf("tempo: ");
    scanf("%f",&tempo);

    massa2 = massa * 1000;
    velocidade = aceleracao * tempo;
    trabalho = massa2 * pow(velocidade,2) /2;
    velocidade = aceleracao * tempo * 3.6;
    comp_pista = (aceleracao * pow(tempo,2)) /2;

    printf("VELOCIDADE = %.2f\n",velocidade);
    printf("ESPACO PERCORRIDO = %.2f\n",comp_pista);
    printf("TRABALHO REALIZADO = %.2f\n",trabalho);
    return 0;
}
