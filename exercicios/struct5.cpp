#include <iostream>
#include <string.h>
/* Atividade 04Struct+ Procedimentos +Ponteiros

A)Escrever um programa que cadastre 10 produtos de supermercado: C�digo, Nome e Pre�o.

B) Ap�s o cadastro, dever� ser executado um procedimento que imprima uma lista com o c�digo, 
nome e pre�o da cada produto. Na chamada do procedimento, 
dever� ser passado como par�metro o endere�o do vetor da struct.

C) Por �ltimo, dever� ser chamado um procedimento para consultar o pre�o de um produto atrav�s de seu c�digo. */

struct produto{
	char nome[10];
	int codigo, preco;
	
}typedef produto;
void cadastra_produto(produto * p){
	for(int i=0;i<10;i++){
		fflush(stdin);
		printf(" %d: digite o nome: ", i);
		scanf("%[A-Za-z ]s", p[i].nome);
		printf("digite o codigo:");
		scanf("%d", &p[i].codigo);
		printf("digite o preco:");
		scanf("%d", &p[i].preco);
	}
}
void imprimir_produto(produto *b){
	for(int j=0;j<10;j++){
		printf("\n codigo: %d nome: %s preco: %d", b->codigo, b->nome, b->preco);
		b++;	
	}
}
void consulta_preco(produto * c){
	int buscar=1;
	while(buscar!=0){
		printf("\n buscar produto por codigo(zero para sair):");
		scanf("%d", &buscar);
		if(buscar=0){
			c=0;// decrementar o ponteiro para percorrer a struct novamente 
			for(int k=0;k<10;k++){
				if(buscar== c->codigo){
					printf("\n produto: %s preco:%d",c->nome ,c->preco);
				}
				c++;
			}
		}//-- else --		
	}
}
int main(int argc, char** argv) {
	produto mercado[10];
	cadastra_produto(mercado);
	imprimir_produto(mercado);
	consulta_preco(mercado);
	return 0;
}
