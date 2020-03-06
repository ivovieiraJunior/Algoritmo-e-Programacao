#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*	Atividade 05 Struct+ Ponteiros + malloc(realloc)
•Defina um registro pessoa para armazenar nome e idade de pessoas. 
•O programa deverá ler um número indeterminadode pessoas: enquanto a for respondido sim para a pergunta: “Cadastrar outro?
	*/

struct pessoa{
	char nome[30];
	int idade;
}typedef pessoa;

pessoa * cadastra(pessoa * ponteiro, int &contador){
	fflush(stdin);
	printf("digite o nome:");
	scanf("%[A-Za-z ]s", ponteiro[contador-1].nome);
	printf("digite a idade:");
	scanf("%d",&ponteiro[contador-1].idade);
	 
	contador++;
	printf("%d \n", ponteiro);
	ponteiro = (pessoa*)realloc(ponteiro, contador * (sizeof(pessoa)));
	
	return ponteiro;
}
int main(int argc, char** argv) {
	pessoa * dados;
	dados= (pessoa*)malloc(sizeof(pessoa));
	int conta_realloc=1;
	char resposta[4]={"sim"};
		while(strcmp(resposta,"sim")==0){
			dados =cadastra(dados,conta_realloc);
			fflush(stdin);
			printf("quer continuar:(sim/nao)\n");
			scanf("%[A-Za-z ]s",resposta);
		}
	
	
	return 0;
}
