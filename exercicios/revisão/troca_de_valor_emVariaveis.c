#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 3) Construa um procedimento que fa�a a troca de valores entre duas vari�veis.
O procedimento dever� receber dois valores inteiros
(lidos atrav�s da entrada padr�o), armazen�-los em vari�veis,
e com a utiliza��o do procedimento dever� trocar o conte�do
das vari�veis e depois mostrar na sa�da padr�o. */

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
