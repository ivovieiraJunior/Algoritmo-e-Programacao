#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* Atividade 03 -Struct
•Crie um programa que leia os dados de 10 alunos:
–Nome e
–Media Final,
•Os dados devem ser armazenados em uma struct.
•Uma vez lidos os dados exibir na tela os dados dos alunos aprovados, 
seguido dos dados dos alunos reprovados. Considere a média superior ou igual 7 para aprovados.

Obs.: Fazer dois procedimentos: mostra_aprovados e mostra_reprovados(passar o ponteiro do vetor para as funções). */
struct aluno{
	char nome[20];
	int media_final;
}typedef aluno;
aluno * cadastra(aluno * ponteiro){
	for(int conta_for_1=0;conta_for_1<3;conta_for_1++){
		fflush(stdin);
		printf("digite o nome:");
		scanf("%[A-Za-z ]s", ponteiro[conta_for_1].nome);
		printf("digite a media final:");
		scanf("%d", &ponteiro[conta_for_1].media_final);
	}
	return ponteiro;
}
void mostra_aprovados(aluno * ponteiro){
	for(int conta_for_2=0;conta_for_2<3;conta_for_2++){	
		if(ponteiro[conta_for_2].media_final>=7)
			printf("%s aprovado nota:%d \n",ponteiro[conta_for_2].nome,ponteiro[conta_for_2].media_final);
	}
}
void mostra_reprovados(aluno * ponteiro){
	for(int conta_for_2=0;conta_for_2<3;conta_for_2++){	
		if(ponteiro[conta_for_2].media_final<=6)
			printf("%s reprovado nota:%d \n",ponteiro[conta_for_2].nome,ponteiro[conta_for_2].media_final);
	}
}
int main(int argc, char** argv) {
	aluno * dados;
	dados =(aluno*)malloc (10*(sizeof(aluno)));
	dados=cadastra(dados);
	mostra_aprovados(dados);
	mostra_reprovados(dados);
	return 0;
}
