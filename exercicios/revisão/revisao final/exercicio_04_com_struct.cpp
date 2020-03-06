#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Atividade 04Struct+ Procedimentos +Ponteiros
A)Escrever um programa que cadastre 10 produtos de supermercado: C�digo, Nome e Pre�o.

B) Ap�s o cadastro, dever� ser executado um procedimento que imprima uma lista com o c�digo, 
nome e pre�o da cada produto. Na chamada do procedimento, dever� ser passado como par�metro o endere�o do vetor da struct.

C) Por �ltimo, dever� ser chamado um procedimento para consultar o pre�o de um produto atrav�s de seu c�digo. */
struct mercado{
	char nome[20];
	int preco;
	int codigo;
}typedef mercado;
mercado * cadastra(mercado * ponteiro){
	for(int conta_for_1=0;conta_for_1<3;conta_for_1++){
		fflush(stdin);
		printf("digite o nome do produto:");
		scanf("%[A-Za-z ]s", ponteiro[conta_for_1].nome);
		printf("digite o preco do produto:");
		scanf("%d", &ponteiro[conta_for_1].preco);
		printf("digite o codigo do produto:");
		scanf("%d", &ponteiro[conta_for_1].codigo);
	}
	
	return ponteiro;
}
void emprimir(mercado * ponteiro){
	for(int conta_for_2=0;conta_for_2<3;conta_for_2++){
		printf("produto:%s preco: %d codigo:%d \n",ponteiro[conta_for_2].nome,ponteiro[conta_for_2].preco,ponteiro[conta_for_2].codigo);
	}
}
void consulta_preco(mercado * ponteiro){
	int continua=-1;
	while(continua!=0){
		printf("\n consultar codigo(zero pra sair):\n");
		scanf("%d", &continua);
			for(int conta_for_busca=0;conta_for_busca<3;conta_for_busca++){
				if(continua==ponteiro[conta_for_busca].codigo){
					printf("produto: %s preco:%d\n",ponteiro[conta_for_busca].nome,ponteiro[conta_for_busca].preco);
				}
			}
	}
}
int main(int argc, char** argv) {
	mercado * produto;
	produto=(mercado*)malloc(10*(sizeof(mercado)));
	produto=cadastra(produto);
	emprimir(produto);
	consulta_preco(produto);
	return 0;
}
