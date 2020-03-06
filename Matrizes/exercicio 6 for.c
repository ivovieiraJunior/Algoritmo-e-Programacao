#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	
		for(contador=10; contador<=20;contador++){
			if(contador%2==0){
				printf("%d\n",contador);
			}
		}
	return 0;
}
