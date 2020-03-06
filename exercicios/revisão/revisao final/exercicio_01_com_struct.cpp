#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Atividade 01 -Struct
•Escrever um programa que cadastre o nome e três notas de 10 alunos.
•No final da execução, mostre os nomes, as notas e a média de cada um deles. */
struct aluno{
	char nome[20];
	int nota_1;
	int nota_2;
	int nota_3;
}typedef aluno;
aluno * ler(aluno* ponteiro){
		for(int conta_for_1=0;conta_for_1<3;conta_for_1++){
			fflush(stdin);
				printf("digite o nome;");
				scanf("%[A-Za-z ]s", ponteiro[conta_for_1].nome);
				printf("digite a nota 1;");
				scanf("%d", &ponteiro[conta_for_1].nota_1);
				printf("digite a nota 2;");
				scanf("%d", &ponteiro[conta_for_1].nota_2);
				printf("digite a nota 3;");
				scanf("%d", &ponteiro[conta_for_1].nota_3);
		}
	return ponteiro;
}
void imprimir(aluno * ponteiro){
	for(int conta_for_2=0;conta_for_2<3;conta_for_2++){
		printf("%s  notas: %d,%d,%d media:%d \n",ponteiro[conta_for_2].nome,ponteiro[conta_for_2].nota_1,ponteiro[conta_for_2].nota_2,ponteiro[conta_for_2].nota_3,(ponteiro[conta_for_2].nota_1 + ponteiro[conta_for_2].nota_2 + ponteiro[conta_for_2].nota_3)/3);
	}
}
int main(int argc, char** argv) {
	aluno *cadastra;
	cadastra =(aluno*) malloc(10* (sizeof(aluno)));
	cadastra=ler(cadastra);
	imprimir(cadastra);
	return 0;
}
