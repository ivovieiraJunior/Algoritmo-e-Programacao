#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
		int dias, mes, anos, idade;
	
	printf("Digite dias:");
	scanf("%d", &dias); 
	
	printf("Digite mes:");
	scanf("%d", &mes);
	
	printf("digite anos:");
	scanf("%d", &anos);

	idade= anos*365 + mes*30 + dias;
	printf("Minha idade é %d",idade);
	
	return 0;
}
