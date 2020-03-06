#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* •Crie um programa que leia os dados de 10 alunos:
–Nome e
–Media Final,
•Os dados devem ser armazenados em uma struct.
•Uma vez lidos os dados exibir na tela os dados dos alunos aprovados, 
seguido dos dados dos alunos reprovados. Considere a média superior ou igual 7 para aprovados.
Obs.: Fazer dois procedimentos: mostra_aprovadose mostra_reprovados
(passar o ponteiro do vetor para as funções). */

struct aluno {
	char nome[20];
	int media_final=0;
	
}typedef aluno;

void cadastrar_aluno(aluno * p){
	for(int i=0;i<10;i++){
		fflush(stdin);
		printf(" %d: Digite o nome:", i);
		scanf("%[A-Za-z ]s", p[i].nome);
		printf("digite a media final:");
		scanf("%d", &p[i].media_final);
	}
}
void mostra_aprovados(aluno * b){
	for(int j=0;j<10;j++){
		if(b->media_final>=7){
			printf("\n %s aprovado %d", b->nome, b->media_final);			
		}
		b++;
	}
}
void mostra_reprovados(aluno * c){
	for(int k=0;k<10;k++){
		if(c->media_final< 7){
			printf("\n %s reprovado %d", c->nome, c->media_final);		
		}
		c++;
	}
}
int main(int argc, char** argv) {
	
	aluno * cadastro;
	cadastro =(aluno*) malloc(50 * sizeof(aluno));
	cadastrar_aluno(cadastro);
	mostra_aprovados(cadastro);
	mostra_reprovados(cadastro);
	
	return 0;
}
