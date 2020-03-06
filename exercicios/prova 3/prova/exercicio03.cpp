#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Faça um programa em que contenha uma estrutura de dados chamada "pessoa" para armazenar nome e idade de pessoas.
• O programa deverá ler um número indeterminado de pessoas: enquanto for respondido sim para a pergunta: “Cadastrar outro?”
• Para cada novo registro, deverá ser redimensionado o bloco reservado de memória da estrutura pessoa.
• É requisito que você sempre mostre o endereço do memória do bloco antes e depois da realocação.
• No final do programa, você deverá mostrar todos as pessoas cadastradas.
• Fazer o programa modulado (usando funções/procedimentos).  */
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























