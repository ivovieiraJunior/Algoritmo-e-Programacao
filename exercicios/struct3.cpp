#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Faça um programa que armazene em uma structos dados 
 de 10 funcionários de uma empresa:
–Nome,
–Idade, Sexo (M/F),
–CPF,
–Data de Nascimento,
–Código do Setor onde trabalha (0-99),
–Cargo que ocupa (string de ate 30 caracteres) e
–Salário.
•Os dados devem ser digitados pelo usuário e armazenados na struct.
•No final, deverá ser exibido na tela. */
struct funcionario {
	
	char nome[20];
	int idade, cpf,dt_nasc, cod_setor, salario;
	char sexo [2];
	char cargo[30];
	
}typedef funcionario;
void cadastro (funcionario * p){
	for(int i=0;i<=1;i++){
	
		fflush(stdin);
		printf("\n digite o nome:");
		scanf("%[A-Za-z ]s", p[i].nome);
		fflush(stdin);
		printf("digite o sexo:");
		scanf("%[A-Za-z ]s", &p[i].sexo);
		fflush(stdin);
		printf("digite o idade:");
		scanf("%d", &p[i].idade);
		printf("digite o setor:");
		scanf("%d", &p[i].cod_setor);
		printf("digite a data de nascimento:");
		scanf("%d", &p[i].dt_nasc);
		fflush(stdin);
		printf("digite o cargo:");
		scanf("%[A-Za-z ]s", p[i].cargo);
		fflush(stdin);
		printf("digite o salario:");
		scanf("%d", &p[i].salario);

	}
}
void imprimir(funcionario * b){
	for(int j=0;j<=1;j++){
		printf("\n nome: %s \n sexo: %s \n cargo:%s \n idade:%d \n codico de setor:%d \n data de nacimento:%d \n salario:%d \n", b->nome, b->sexo, b->cargo, b->idade, b->cod_setor, b->dt_nasc, b->salario );
		b++;
	}
}
int main(int argc, char** argv) {
	funcionario * pessoas;
	pessoas = (funcionario*)malloc(10 * sizeof(funcionario));
	cadastro(pessoas);
	imprimir(pessoas);
	return 0;
}
