#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 3) Construa um procedimento que faça a troca de valores entre duas variáveis.
O procedimento deverá receber dois valores inteiros
(lidos através da entrada padrão), armazená-los em variáveis,
e com a utilização do procedimento deverá trocar o conteúdo
das variáveis e depois mostrar na saída padrão. */

void le(int * x, int * y)
{
    int troca;
	troca =y;
	y=x;
	x=troca;	
}


int main(int argc, char *argv[]) {
	int a;
	int b;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	le(&a,b);
	printf("voce digitou %d , %d", a,b);
	return 0;
}
