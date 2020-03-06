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
	int soma=0;
	
		printf("digite um valor inicial e o final");
		scanf("%d %d",&valor1, &valor2);
		//printf("digite um valor final:");
	//	scanf("%d",&valor2);
		if(valor1 > valor2){
			printf("erro primeiro valor final e menor");
		}
		else{
		
	for(valor1;valor1<=valor2;valor1++){
		soma = soma+valor1;
	}
	printf("a soma foi %d",soma);
	}
	return 0;
}
