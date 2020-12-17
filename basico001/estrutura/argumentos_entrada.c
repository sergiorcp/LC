/*
	PASSA DOIS ARGUMENTOS DE ENTRADA PARA O PROGRAMA
	O PRIMEIRO DIZ A QUANTIDADE DE ARGUMENTOS
	DO SEGUNDO EM DIANTE SÃO STRINGS DE ENTRADA
*/
#include <stdio.h>

int main(int argc, char *argv[]){
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return 0;
}
