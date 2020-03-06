#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	int numero;
	
	numero=10;
	contador=0;
	
		while(contador<=10){
			printf("%d\n", numero);
			contador++;
			numero++;
		}
	return 0;
}
