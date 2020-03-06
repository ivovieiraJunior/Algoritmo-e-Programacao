#include <stdio.h>
#include <stdlib.h>

/* algoritmo 1 */

int main(int argc, char *argv[]) {
	int idade;

	 	printf("digite sua idade: ");
	 	scanf("%d", &idade );
	 		if (idade >= 60){
	 			printf("voce e idoso");
			 }
			 else {
			 	if (idade >= 18){
			 		printf("voce e adulto");
				 }
				 else{
				 	if (idade<=12){
				 		printf(" voce e crianca");
					 			}
				 	else{
				 		printf("vc e adolecente");
					 	}
				 
				 	}
			 }
	return 0;
}
