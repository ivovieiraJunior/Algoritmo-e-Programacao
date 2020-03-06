#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>     
#include <stdio.h>

/* Faça um programa que leia a constituição do Brasil e 
armazene cada palavra em um estrutura, 
formada pela palavra a q quantidade de vezes que ela aparece.
	O programa deverá ler uma palavra e percorrer a estrutura 
verificando se a palavra já existe. 
	Caso encontre a palavra, deverá incrementar a quantidade de vezes que ela existe. 
Caso não encontre, deverá redimensionar o vetor de estruturas e insere a nova palavra, 
definindo como 1 a quantidade de vezes que ela aparece.
No final do programa, 
deverá listar todas as palavra e suas respectivas quantidades de repetições. */

struct palavra{
	char nome[30];
	int vezes=0;
}typedef palavra;

int  comparar(palavra * p,char *pala,int j){
	int continua = 0;
	int i=0;
	while(i<j){
		if(strcmp(p[i].nome,pala)==0){
			p[i].vezes+1;
			return continua;// return 0 para informar que foi achada e palavra
		}		
		i++;	
	}
	return continua=1;// return 1 para informar que nao foi achada e palavra entao tem que armazenar
}
palavra * mais_espaco(palavra * p,int &qtd){

	qtd++;
	p = (palavra*) realloc(p, qtd * (sizeof(palavra)));
	return p;
}
void imprimir(palavra * p, int qtv){
	int i=0;
	//int * c;
	//c =p;
	while(i<qtv){
		printf("nome: %s vezes: %d \n",p[i].nome ,p[i].vezes);
	//	printf("nome: %s vezes: %d",c->nome, c->vezes);
	//	c++;
	i++;
	}
}
int main(int argc, char** argv) {
	palavra * armazena;
	armazena = (palavra*) malloc(sizeof(palavra));
	
	char linha[1024];
	char * result;
	int i=0;
	int armaze=0,cont_realloc=1;
	FILE * arquivo;
		if((arquivo = fopen("constituicao.txt","r+"))==NULL)
			printf("erro ao abrir o arquivo!!!");
		else{
			printf(" arquivo aberto com sucesso");
			while(!feof(arquivo)){
					fgets(linha,1024,arquivo);
					result=strtok(linha," ");
					while(result!=NULL){
						armaze = comparar(armazena,result,cont_realloc);
						
						if(armaze==1){
							armazena = mais_espaco(armazena,cont_realloc);
							strcpy(armazena[cont_realloc-1].nome,result);
							armazena[cont_realloc-1].vezes++;
						}
						result=strtok(NULL," ");										
					}
				i++;
			}
		}
	imprimir(armazena,cont_realloc);
	fclose(arquivo);
	return 0;
}










