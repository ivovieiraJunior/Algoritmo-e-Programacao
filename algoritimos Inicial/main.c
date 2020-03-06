#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	 int dias, segundos;
	 
	 printf("digite os dias:");
	 scanf("%d",&dias);
	 
	 segundos= dias*24*60*60;
	 printf("dias em segundos e %d", segundos );


	return 0;
}
