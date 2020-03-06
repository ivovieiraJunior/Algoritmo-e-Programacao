#include <iostream>

/* Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um material radioativo. Sabendo-se que este perde 25% de sua
massa a cada 60 Anos. Escrever um algoritmo em PHP que calcule iterativamente e imprima o tempo necessário para que a massa
deste material se torne menor que 0,10 grama. Mostre quantos anos são necessários e a evolução de cada 60 anos.
 */

int main(int argc, char** argv) {
	float massa=1;
	int anos=0;
	int conta_while=0;
	printf("digite a massa:");
	scanf("%f",&massa);
	
	while(massa>0.10){
		printf("massa original:%.2f",massa);
		massa-= massa*0.25;
		printf(" apos a perda%.2f ",massa);
		anos+=60;
		printf("anos:%d \n",anos);
		 
	conta_while++;
	}

	return 0;
}
