/*
	TRABALHANDO COM system("PAUSE"); pause é uma chamada windows

	system(); -> Faz chamadas a funções do sistema operacional.
	obs: Deve-se ter cuidado ao fazer essas chamadas pois nunca se sabe exatamente o que 
	estamos chamado no sistema. Por exemplo, podemos chamar um programa que faz a formatação de algum
	disco.

	OBS:
	VERIFICAR AS CHAMADAS DE SISTEMA OPERACIONAL PARA PODER USAR SYSTEM.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

	printf("%s\n", "Esperando o programa encerrar.");
	system("cal -y");
	return 0;
}
