#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
/* Revisão 07
Faça um programa que leia a constituição do Brasil e armazene cada palavra em um estrutura, 
formada pela palavra a q quantidade de vezes que ela aparecep 

	O programa deverá ler uma palavra e percorrer a estrutura verificando se a palavra já existe. 
Caso encontre a palavra, deverá incrementar a quantidade de vezes que ela existe. Caso não encontre, 
deverá redimensionar o vetor de estruturas e insere a nova palavra, 
definindo como 1 a quantidade de vezes que ela aparece.*/
struct palavra{
	char palavra[30];
	int vezes;
}typedef palavra;
palavra * cadastra(palavra * ponteiro,int &contador){
	FILE * arquivo;
	int i;
	char * result;
	int salvar=1;
	char linha[1024];
	arquivo= fopen("constituicao.txt","r+");
	if(arquivo==NULL)
		printf("ERRO ao abrir o arquivo!! \n");
	
	else{
		printf("arquivo aberto com sucesso \n");
		
		while(feof(arquivo)){
			fgets(linha,1024,arquivo);
				result=strtok(linha," ");
				while(result!=NULL){
					
					for(int conta_for=0;conta_for<contador-1;conta_for++){
						if(strcmp(result,ponteiro[conta_for].palavra)==0){
							ponteiro[conta_for].vezes++;
							salvar=0;
						}
					}
					if(salvar==1){
						strcpy(ponteiro[contador-1].palavra,result);
						ponteiro[contador-1].vezes=1;
						contador++;
						ponteiro=(palavra*)realloc(ponteiro,contador * (sizeof(palavra)));
					}
					result=strtok(NULL," ");
				}
					
		i++;
		}
		
	}
	return ponteiro;
}
int main(int argc, char** argv) {
	palavra * dados;
	dados= (palavra*)malloc(sizeof(palavra));
	int conta_realloc=1;
	
	dados=cadastra(dados,conta_realloc);
	for(int conta_for1=0;conta_for1<conta_realloc-1;conta_for1++){
		printf("%s , vezes: %d",dados[conta_for1].palavra,dados[conta_for1].vezes);
	}
	return 0;
}
