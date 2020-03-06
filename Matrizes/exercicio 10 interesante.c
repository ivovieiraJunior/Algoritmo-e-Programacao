#include <stdio.h>
#include <stdlib.h>

/* dicas:
	intnumero[7] = {1,3,5,7,8,3,4};intpalavra[7] = “cafe\0”;
	
	if(palavra[i]=='\0')break;
	
	scanf("%[A-Za-z 0-9]s",&palavra); */

int main(int argc, char *argv[]) {
	char pessoa[20];
	int peso[20];
	int gorda[10];
	int magra[10];
	float maior_peso;
	float menor_peso;
	float peso_medio;
	float soma_pesos;
	int contador;
	
		printf("digite o nome;");
		scanf("%[A-Za-z 0-9]s",&pessoa);
		printf("digite o peso;");
		scanf("%[d", &peso[0]);
		

	maior_peso= peso[0];
	menor_peso= peso[0];
	soma_pesos=0;
	contador =0;
	
	for(contador=1;contador<5;contador++){
		printf("digite o nome;");
		scanf("%d", &pessoa[contador]);
		printf("digite o peso;");
		scanf("%[d", &peso[contador]);
	}
	

		
		for(contador=0;contador<5;contador++){
			printf("digite o nome;");
			scanf("%[A-Za-z 0-9]s", &pessoa[contador]);
			printf("digite o peso;");
			scanf("%[A-Za-z 0-9]s", &peso[contador]);
				if(peso[contador] > maior_peso){ 
					maior_peso = peso[contador];
					gorda=pessoa[contador];

				}
				else if(peso[contador] < menor_peso){
					menor_peso = peso[contador];
					magra=pessoa[contador];
				}
				soma_pesos= soma_pesos + peso[contador];
		}
		peso_medio = soma_pesos / 20; 
		printf(" mais pessado eh %s", gorda , "com o peso de %d", maior_peso);
		printf(" menos  pessado eh %s", magra  , "com o peso de %d", menor_peso);
		printf(" a soma dos pesos eh %f", soma_pesos);
		printf(" a media dos pesos eh %f", peso_medio);
		
	return 0;
}
















