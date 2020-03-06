#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cor;
		printf("digite o numero da sua cor: ");
		scanf("%d" , &cor);
			if(cor==1){
				printf("sua cor e branco");
			}
			else{
				if(cor==2){
					printf("sua cor e vermelha");
				}
				else{
					if(cor==3){
						printf("sua cor e azul");
					}
					else{
						if(cor==4){
							printf("sua cor e amarelo");
							}
						else{
							printf("opcao invalida");
							}	
						}
					}
				}
			
	return 0;
} 
