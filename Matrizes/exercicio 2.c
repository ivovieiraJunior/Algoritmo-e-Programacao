#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	int par;
		
	contador=10;
		while(contador<= 20){
			if(contador%2==0){
				printf("%d\n",contador);
			}
			contador++;
		}
	return 0;
}
