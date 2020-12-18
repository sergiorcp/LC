/*
	PROGRAMA SALÁRIO
	Faz o cálculo do salário bruto e líquido entrando com informações básicas:
	ht -> horas trabalhadas
	vh -> valor da hora
	pd -> percentual desconto
	sb -> calculo para o salario bruto
	td -> calculo para o total desconto
	sl -> calculo para o salário líquido
*/

#include <stdio.h>

int main(void){

	float ht, vh, pd, td, sb, sl;

	printf("%s", "Informe o valor da hora trabalhada :");
	scanf("%f", &ht);


	printf("%.2f\n", ht);

	return 0;
}
