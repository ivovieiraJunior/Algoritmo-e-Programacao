#include <iostream>
#include <string.h>
/* Atividade 04Struct+ Procedimentos +Ponteiros

A)Escrever um programa que cadastre 10 produtos de supermercado: Código, Nome e Preço.

B) Após o cadastro, deverá ser executado um procedimento que imprima uma lista com o código, 
nome e preço da cada produto. Na chamada do procedimento, 
deverá ser passado como parâmetro o endereço do vetor da struct.

C) Por último, deverá ser chamado um procedimento para consultar o preço de um produto através de seu código. */

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
