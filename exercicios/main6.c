#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 				Atividade 06
	�Fa�a um programa que leia um n�mero enquanto for digitado a op��o �SIM�.
Caso a op��o digitada for diferente de �SIM�,
dever� mostrar todos os valores digitados.
	�Observa��o:Usar vetor com 1000 posi��es. */

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
