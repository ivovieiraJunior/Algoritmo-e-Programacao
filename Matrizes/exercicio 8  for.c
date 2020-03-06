#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor_1;
	int valor_2;	
	int contador;
		printf("digite um valor:");
		scanf("%d", &valor_1);
		printf("%d\n", valor_1);

		for(contador=valor_1;contador>=0;contador--){
			printf("digite um valor:");
			scanf("%d", &valor_2);
			printf("%d\n", valor_2);
			contador=valor_2;
		}
		
	
	return 0;
}
