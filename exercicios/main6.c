#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 				Atividade 06
	•Faça um programa que leia um número enquanto for digitado a opção “SIM”.
Caso a opção digitada for diferente de “SIM”,
deverá mostrar todos os valores digitados.
	•Observação:Usar vetor com 1000 posições. */

int main(int argc, char *argv[]) {
	char numeros[1000];
	char opcao[4]="sim";
	char resposta[3];
	int i=0;
	
		
		printf("digite um valor:");
		scanf("%d", &numeros[i]);
		printf("quer comtinuar digite sim:");
		scanf("%s", resposta);
		i++;
	while(strcmp(opcao, resposta)==0){
		printf("digite um valor:");
		scanf("%d", &numeros[i]);
		printf("quer comtinuar digite sim:");
		scanf("%s", resposta);
		i++;
	}
	for(i=0;i<1000;i++){
		printf("valor digitado %d\n", numeros[i]);
		i++;
	}
	
	return 0;
}
