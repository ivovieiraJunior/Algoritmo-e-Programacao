#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Fa�a um programa em que contenha uma estrutura de dados chamada "pessoa" para armazenar nome e idade de pessoas.
� O programa dever� ler um n�mero indeterminado de pessoas: enquanto for respondido sim para a pergunta: �Cadastrar outro?�
� Para cada novo registro, dever� ser redimensionado o bloco reservado de mem�ria da estrutura pessoa.
� � requisito que voc� sempre mostre o endere�o do mem�ria do bloco antes e depois da realoca��o.
� No final do programa, voc� dever� mostrar todos as pessoas cadastradas.
� Fazer o programa modulado (usando fun��es/procedimentos).  */
struct pessoa{
	char nome[30];
	int idade;
}typedef pessoa;
pessoa * cadastro(pessoa * ponteiro,int &conta_realloc){
	pessoa * p;
	p=ponteiro;
	fflush(stdin);
	printf("digite o nome:\n");
	scanf("%[A-Za-z ]s",ponteiro[conta_realloc-1].nome);
	printf("digite a idade:\n");
	scanf("%d", &ponteiro[conta_realloc-1].idade);
	printf("endereco da memoria ANTES do realloc: %x\n",p);
	conta_realloc++;
	ponteiro=(pessoa*)realloc(ponteiro,conta_realloc*(sizeof(pessoa)));
	p++;
	printf("endereco da memoria DEPOIS do realloc: %x\n",p);
	return ponteiro;
}
void emprimir(pessoa * ponteiro, int conta_realloc){
	for(int conta_for=0;conta_for<conta_realloc-1;conta_for++){
		printf("nome:%s idade:%d \n",ponteiro[conta_for].nome,ponteiro[conta_for].idade);
	}
}
int main(int argc, char** argv) {
	pessoa * dados;
	dados=(pessoa*)malloc(sizeof(pessoa));
	int conta_realloc=1;
	char sim[4]={"sim"};
	char resposta[4]={"sim"};
	
	while((strcmp(resposta,sim))==0){
		if((strcmp(resposta,sim))==0){
			dados=cadastro(dados,conta_realloc);
			fflush(stdin);
			printf("quer continuar (sim/nao):\n");
			scanf("%[A-Za-z ]s",resposta);
		}
		if((strcmp(resposta,sim))!=0){
			emprimir(dados,conta_realloc);
		}
	}
	
	
	return 0;
}























