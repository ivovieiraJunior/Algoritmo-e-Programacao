#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* Atividade 05Struct+ Ponteiros + malloc(realloc)

•Defina um registro pessoa para armazenar nome e idade de pessoas.

•O programa deverá ler um número indeterminadode pessoas: 
enquanto a for respondido sim para a pergunta: “Cadastrar outro?”

•Para cada novo registro, deverá ser redimensionado o vetor pessoa. */
struct pessoa{
	char nome[10];
	int idade;
}typedef pessoa;

void  cadastro_pessoa(pessoa * p){
	char novamente[4]={"sim"};
	char continua[4]={"sim"};
		while(strcmp(novamente,continua)==0){
			printf("cadastrar novamente:(zero para sair)");
			scanf("%[A-Za-z ]s", novamente);
			
				if(strcmp(novamente,continua)==0){
					int i=0;
					i++;
					p = realloc(p, i* sizeof (struct pessoa));
				//	p  =  realloc( p ,(i* sizeof  p));// realocando mais uma posição a struct 
					//== cadastro ==
						fflush(stdin);// tirando o bugs do teclado
						printf("digite o nome:");
						scanf("%[A-Za-z ]s", p[i].nome);
						printf("digite a idade:");
						scanf("%d", &p[i].idade);
				}
		}
} 
int main(int argc, char** argv) {
	pessoa cadastro[1];
	cadastro_pessoa(cadastro);
	
	return 0;
}
