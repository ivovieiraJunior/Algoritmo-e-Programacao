#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Atividade 05Struct+ Ponteiros + malloc(realloc)
•Defina um registro pessoa para armazenar nome e idade de pessoas.
•O programa deverá ler um número indeterminadode pessoas: enquanto a for respondido sim para a pergunta: “Cadastrar outro?”
•Para cada novo registro, deverá ser redimensionado o vetor pessoa. */
struct pessoa{
	char nome[20];
	int idade;
}typedef pessoa;
pessoa * cadastra_pessoa(pessoa * ponteiro, int &conta_realloc){
		char sim[4]={"sim"};
		char resposta[4]={"sim"};
		while(strcmp(resposta,sim)==0){			
			conta_realloc++;
			ponteiro=(pessoa*)realloc(ponteiro,conta_realloc *(sizeof(pessoa)));
			fflush(stdin);
				printf("digite o nome: \n");
				scanf("%[A-Za-z ]s",ponteiro[conta_realloc-1].nome);
				printf("digite a idade: \n");
				scanf("%d", &ponteiro[conta_realloc-1].idade); 
			fflush(stdin);
			printf("Quer continuar:(sim ou nao)\n");
			scanf("%[A-Za-z ]s", resposta);
		}
		
	return ponteiro;
}
int main(int argc, char** argv) {
	pessoa * registro;
	int conta_realloc=1;
	registro = (pessoa*) malloc(sizeof(pessoa));
	registro = cadastra_pessoa(registro,conta_realloc);
	return 0;
}
