#include <stdio.h>
#include <stdlib.h>

/* 			Exerc�cio 3

	3) Implemente uma fun��o recursiva que,
dados dois n�meros inteiros x e n, calcula o
valor de 'x' eletavado na 'n'.
 */
int calcula_valor(int a , int b){	
	if(b==0)
		return 1;
	return (a * calcula_valor(a,b-1));
}
int main(int argc, char *argv[]) {
	int x;
	int n;
	
	printf("Digite a base:");
	scanf("%d", &x);
	printf("Digite o exponte:");
	scanf("%d", &n);
	
	printf("resultado eh: 3%d ", calcula_valor(x,n));
	
	return 0;
}
