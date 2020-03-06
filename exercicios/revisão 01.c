#include <stdio.h>
#include <stdlib.h>

/* Atividade 01
•Faça um programa em C que leia dois números qualquer e 
	some todos os números inteiros de contidos no intervalo lido.
•Você deverá fazer uma validação para que o sempre o seja lido primeiro o menor e depois e maior.
 	Caso isso não for obedecido, deverá mostrar uma mensagem informando o erro. */

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
