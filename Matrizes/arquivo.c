#include <stdio.h>

		main(){
	char matriz[10][10];
	int i;
	int j;
	FILE *saida;
	
	if((saida= fopen("Arquivo.txt", "a+")) == NULL) {
	printf("Erro ao abrir arquivo");
	}
		else{
			
		
		for(i=0; i<10;i++){
			for(j=0;j<10;j++){
				if(i==0 ||j==9 || j==0 || i==9){
					matriz[i][j]='*';						
				}
				else{
					matriz[i][j]='-';
				}	fprintf(saida," %c ", matriz[i][j]);
			}fprintf(saida,"\n");
		}
	}
		fclose(saida);
	}


