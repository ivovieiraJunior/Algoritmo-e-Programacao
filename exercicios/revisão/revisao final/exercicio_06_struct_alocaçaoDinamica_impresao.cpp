#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Crie um programa que permita armazenar dados sobre pessoas: nome, 
a altura e da data de nascimento. O programa deverá ler dados de um número indeterminado de pessoas. 
Cada pessoa deve ser representada por uma struct dentro de um vetor. */
struct pessoa{
	char nome[20];
	float altura;
	int dt_nasc;
}typedef pessoa;
pessoa * cadastra(pessoa * ponteiro,int &conta_realloc){
		
	fflush(stdin);
	printf("digite o nome:\n");
	scanf("%[A-Za-z ]s", ponteiro[conta_realloc-1].nome);
	printf("digite o altura(ex: 1.70):\n");
	scanf("%f", &ponteiro[conta_realloc-1].altura);
	printf("digite a data de nascimento:\n");
	scanf("%d", &ponteiro[conta_realloc-1].dt_nasc);
	
	conta_realloc ++;
	ponteiro=(pessoa*) realloc (ponteiro,conta_realloc *(sizeof(pessoa)));	
	return ponteiro;
}
void meni(){
	printf("[1] Inserir uma pessoa;\n");
	printf("[2] listar todas as pessoas;\n");
	printf("[3] Sair;\n");
}
void imprimir(pessoa * ponteiro, int contador){
	for(int conta_for =0;conta_for<contador-1;conta_for++){
		printf("\n nome:%s \n altura:%.2f \n data de nacimento: %d \n",ponteiro[conta_for].nome,ponteiro[conta_for].altura,ponteiro[conta_for].dt_nasc);
	}
}
int main(int argc, char *argv[]) {
	pessoa * dados;
	dados = (pessoa*) malloc(sizeof(pessoa));
	int conta_realloc=1;
	int menu=0;
	
	while(menu!=3){
		
		meni();
		printf("opcao:");
		scanf("%d",&menu);
		if(menu==1)
		dados = cadastra(dados,conta_realloc);
		if(menu==2)
		imprimir(dados,conta_realloc);
		
	}
	
	
	
	
		return 0;
}
