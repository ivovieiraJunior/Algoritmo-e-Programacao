#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char operacao;
	float valor_1;
	float valor_2;
	float resultado;
		
		printf("digite a opertacao( +, -, /, * ): ");
		scanf("%C" , &operacao);
		
		printf("digite um valor: ");
		scanf("%f", &valor_1);
		
		printf("digite outro valor:");
		scanf("%f", &valor_2);
		
			if (operacao == '-' ) {
				resultado = ( valor_1 - valor_2);
				
				}
			if( operacao == '+'){
				resultado = (valor_1 + valor_2);
			
			}
			if( operacao == '*'){
				resultado = (valor_1 * valor_2);
				
			}
			if(operacao == '/'){
				resultado= (valor_1 / valor_2);
		
			}
				printf("resultado e %.2f", resultado);
	

	
	
	
	return 0;
}
