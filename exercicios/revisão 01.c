#include <stdio.h>
#include <stdlib.h>

/* Atividade 01
�Fa�a um programa em C que leia dois n�meros qualquer e 
	some todos os n�meros inteiros de contidos no intervalo lido.
�Voc� dever� fazer uma valida��o para que o sempre o seja lido primeiro o menor e depois e maior.
 	Caso isso n�o for obedecido, dever� mostrar uma mensagem informando o erro. */

int main(int argc, char *argv[]) {
	int valor1;
	int valor2;
	int i;
	int soma;
	
		printf("digite um valor;");
		scanf("%d",&valor1);
		printf("digite um valor maior:");
		scanf("%d",&valor2);
		i=valor1;
		if(valor1>valor){
			printf("erro primeiro valor maior");
		}
		else{
		
	for(i=0;i<valor2;i++){
		soma= soma+valor1;
	}
	printf("a soma foi %d",soma);
	}
	return 0;
}
