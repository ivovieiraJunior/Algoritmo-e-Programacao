#include <stdio.h>
#include <stdlib.h>

/* 7)Implemente uma função recursiva que,
 dados dois números inteiros x e n, 
 calcula o valor de  X elevado na espoente N. */
int expo(int base, int expoente){
	if(expoente==0)
		return 1;
	if (expoente>0)
		return base * expo(base,expoente-1);
}

int main(int argc, char *argv[]) {
	int x,n;
	printf("digite um valor:");
	scanf("%d",&x);
	printf("que elevado a outro valor:");
	scanf("%d",&n);
	printf("o resultado eh: %d",expo(x,n));
	return 0;
}
