#include <stdio.h>
int main(){
	/*O custo ao consumidor de um carro novo e? a soma do custo de f�brica com a
	 porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
	 Supondo que a porcentagem do distribuidor seja de x% do pre�o de f�brica e 
	 os impostos de y% do pre�o de f�brica, fazer um programa para ler o custo 
	 de f�brica de um carro, a percentagem do distribuidor e o percentual de 
	 impostos, calcular e imprimir o custo final do carro ao consumidor. */
	 
	float pf, pd, pi, soma, porce, bruto;
	printf("Preco de fabrica: ");
	scanf("%f", &pf);
	printf("Percentual do distribuidor:[%%] ");
	scanf("%f", &pd);
	printf("Percentual de impostos:[%%] ");
	scanf("%f", &pi);
	
	porce = (pd/100) + 1;
	bruto = pf * pi/100;
	soma = pf * porce + bruto;
	
	printf("\n preco de fabrica %.3f", pf);
	printf("\n percentual do distribuidor %.1f%%", pd);
	printf("\n percentual de impostos %.1f%%", pi);
	
	printf("\n O valor do carro e: %.3f", soma);	
}
