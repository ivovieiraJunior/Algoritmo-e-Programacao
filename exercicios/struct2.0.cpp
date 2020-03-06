#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* Escrever um programa que cadastre o nome e três notas de 10 alunos.
•No final da execução, mostre os nomes, as notas e a média de cada um deles.
Obs.: Usar uma estrutura de registros (struct) para armazenar os dados. */
struct aluno{
	char nome[20];
	int prova1,prova2,prova3;
	
} typedef aluno;
void cadastra (aluno *p){
	
	for(int i=0;i<10;i++){
		fflush(stdin);
		printf("\n digite um nome:");
		scanf("%[A-Za-z ]s", p[i].nome);
		printf("digite a nota da prova 1:");
		scanf("%d", &p[i].prova1);
		printf("digite a nota da prova 2:");
		scanf("%d", &p[i].prova2);
		printf("digite a nota da prova 3:");
		scanf("%d", &p[i].prova3);
		
	}
}
void imprimir(aluno * b){
	
	for(int j=0;j<10;j++){
		int media=0;
		printf("\n nome: %s nota1: %d nota2: %d nota3 %d",b->nome,b->prova1, b->prova2, b->prova3);
		media= (b->prova1 + b->prova2 + b->prova3) / 3;
		printf(" media: %d\n",media);
		b++;
	}
}
int main(int argc, char** argv) {
	aluno cadastro[10];
	cadastra(cadastro);
	imprimir(cadastro);
	
	
	return 0;
}
