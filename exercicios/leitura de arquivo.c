 #include <stdio.h>
#include <stdlib.h>

/* Existem quatro candidatos. Os votos são informados por código. 
Os dados utilizados para a escrutinagemobedecem à seguinte codificação:
* valores 1, 2, 3, 4 = voto para os respectivos candidatos;
* 5 = voto branco;
* 6 ou maior = voto em nulo.
Elabore um algoritmo que calcule e escreva:
* o total de votos para cada candidato e seu percentual sobre o total;
* o total de votos nulos e seu percentual sobre o total;
* o total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0 (zero). */

int main(int argc, char *argv[]) {
	char votacao[0][6];
	int tam=0;
	int voto=1;
	int i=0,j=0;
	
	FILE * saida= fopen("votaçãoTSE.txt","a+");
		if(saida==NULL){
			printf("Erro no abrir o arquivo");
		}
	else{
		
	
	while(voto!=0){
		printf("digite o numero de seu candidato:");
		scanf("%d", &voto);
		
		switch(valor)
		
			case(valor==1);
				votacao[tam][j]++;
		//==============================
			case(valor==2);
				votacao[tam][j+1]++;
		//==============================
			case(valor==3);
				votacao[tam][j+2]++;
		//==============================
			case(valor==4);
				votacao[tam][j+3]++;
		//==============================
			case(valor==5);
				votacao[tam][j+4]++;
		//==============================
			case(valor==6);
				votacao[tam][j+5]++;
		//==============================
			case(valor==0);
				break;
		//==============================
	tam++;
	}
	//=====lendo e inprimindo ela========
		for(i=0; i<tam;i++){
			for(j=0;j<6;j++){
				fprintf(saida,"%c ", votacao[i][j]);
			}printf(" %c ", votacao[i][j]);
		fprintf(saida,"\n");	
		}printf("\n");
		
	}//else
	fclose(saida);
		return 0;
}
