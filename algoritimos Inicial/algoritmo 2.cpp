#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int dias, mes, anos, idade;
	
	printf("Digite o numeros de dias:");
	scanf("%d", dias); 
	
	printf("Digite o numeros de mes:");
	scanf("%d", mes);
	
	printf("digite o numeros de anos:");
	scanf("%d", anos);

	idade= anos*365 + mes*30 + dias;
	printf("Minha idade em dias e %d", idade);

	return 0;
}
