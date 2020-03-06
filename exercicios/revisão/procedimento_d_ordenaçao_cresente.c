#include <stdio.h>
#include <stdlib.h>

/* 4) Faça um procedimento que recebe 3 valores inteiros por parâmetro
e imprimir em ordem crescente.

Os valores devem ser lidos no bloco principal (main). */
int imprimi(int a, int b, int c){
	if(a>b &&a>c){
		if(c>b)
			printf("%d ,%d , %d", b,c,a);
		else
			printf("%d ,%d , %d", c,b,a);
	}
	if(b>a &&b>c){
		if(c>a)
			printf("%d ,%d , %d", a,c,b);
		else
			printf("%d ,%d , %d", c,a,b);
	}
	if(c>a &&b<c){
		if(b>a)
			printf("%d ,%d , %d", a,b,c);
		else
			printf("%d ,%d , %d", b,a,c);
	}
}
int main(int argc, char *argv[]) {
	int a,b,c;
	printf("digite 3 valores:");
	scanf("%d %d %d", &a,&b,&c);
	imprimi(a,b,c);
	
	return 0;
}
