#include <iostream>
#include <stdio.h>
#include <stdlib.h>


/* Atividade 02 -Struct
•Faça um programa que armazene em uma structos dados de 10 funcionários de uma empresa:
–Nome,
–Idade, Sexo (M/F),
–CPF,
–Data de Nascimento,
–Código do Setor onde trabalha (0-99),
–Cargo que ocupa (string de ate 30 caracteres) e
–Salário.
•Os dados devem ser digitados pelo usuário e armazenados na struct.
•No final, deverá ser exibido na tela. */
struct funcionario{
	char nome[20];
	char sexo[3];
	char cargo[30];
	int idade,dt_nasc,cod_setor,salario;
}typedef funcionario;
funcionario * cadastra(funcionario * ponteiro){
	int i=0;
		for(int conta_for_1=0;conta_for_1<1;conta_for_1++){
			fflush(stdin);
			printf("digite o nome:\n");
			scanf("%[A-Za-z ]s", ponteiro[conta_for_1].nome);
			fflush(stdin);
			//if(ponteiro[conta_for_1].sexo!='F'||ponteiro[conta_for_1].sexo!='M'||ponteiro[conta_for_1].sexo!='f'||ponteiro[conta_for_1].sexo!='m'){
				printf("digite o sexo:\n");
				scanf("%s", ponteiro[conta_for_1].sexo);
			//}
			fflush(stdin);
			printf("digite o cargo:\n");
			scanf("%[A-Za-z ]s", ponteiro[conta_for_1].cargo);
			printf("digite a idade:\n");
			scanf("%d", &ponteiro[conta_for_1].idade);
			printf("digite a data de nascimeto:\n");
			scanf("%d", &ponteiro[conta_for_1].dt_nasc);
			while(ponteiro[conta_for_1].cod_setor>=99||ponteiro[conta_for_1].cod_setor<=0){
				printf("digite codigo de setor(0-99):\n");
				scanf("%d", &ponteiro[conta_for_1].cod_setor);
				i++;				
			}
			printf("digite o salario:\n");
			scanf("%d", &ponteiro[conta_for_1].salario);
		}
	return ponteiro;	
}
void imprimir(funcionario * ponteiro){
	for(int conta_for_2 =0;conta_for_2<1;conta_for_2++){
		printf("nome:%s \n sexo:%s \n cargo: %s \n idade: %d \n data de nascimento: %d \n codigo de setor %d \n salario %d \n",ponteiro[conta_for_2].nome,ponteiro[conta_for_2].sexo,ponteiro[conta_for_2].cargo,ponteiro[conta_for_2].idade,ponteiro[conta_for_2].dt_nasc,ponteiro[conta_for_2].cod_setor,ponteiro[conta_for_2].salario);
	}
}
int main(int argc, char** argv) {
	funcionario * pessoa;
	pessoa =(funcionario*) malloc (10*(sizeof(funcionario)));
	pessoa = cadastra(pessoa);
	imprimir(pessoa);
	return 0;
}
