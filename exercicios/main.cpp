#include <iostream>
#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Fa�a um programa para administrar uma estrutura de 50 n�meros inteiros.
Structnumero{
intvalor;
charprimo[1];
intdivisores;
}
Os n�meros ser�o gerados aleatoriamente (usar fun��o rand()).
Ap�s gerar os n�meros, fazer uma fun��o para 
verificar se os n�meros s�o primos (sim ou n�o) e outra para calcular a quantidade de divisores.
Criar um procedimento para organizar o vetor de estruturas.
No final do programa, dever�o ser listados todos os valores, uma vez crescente e outra decrescente. */

struct numero{
	char primo[1];
	int valor=0,divisores;
}typedef numero;
void encrementar_numero(numero * p){
	int i=0;
	while(i<50){
		
		p[i].valor=rand()%100;
		printf("valor do srand:%d \n ", p[i].valor);
	i++;
	}
}
void conta_primo(numero * p){
	int cont=1;
	int i=0,valor;
	
		while(i<=50){
			valor=0;
			cont=0;
				while(cont<=p[i].valor){
				
					if(p[i].valor% cont==0)
						valor++;
				cont++;
				}
			if(valor==2){
				printf("valor:%d e primo:",p[i].valor);
				p[i].primo[0]='s';
			}
			else
				p[i].primo[0]='n';
			
		i++;		
		}
}
void emprimir (numero * c){
	for(int i=0;i<50;i++){
		printf("valor:%d eh primo:%s",c[i].valor ,c[i].primo);
	}
}
int main(int argc, char** argv) {
	
	int i=0;
	numero  cadastra[50];
	encrementar_numero(cadastra);
	conta_primo(cadastra);
	emprimir(cadastra);
	return 0;
}
