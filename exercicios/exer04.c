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
	int candato_1=0,candato_2=0,candato_3=0,candato_4=0;
	int branco=0,nulos=0;
	int voto=1;
	float resultado;
	
	FILE * saida= fopen("votaçãoTSE.txt","a+");
		if(saida==NULL){
			printf("Erro no abrir o arquivo");
		}
	else{
	//========= lendo a votação anterior =========
		fscanf(saida,"%d %d %d %d %d %d",&candato_1,&candato_2,&candato_3,&candato_4,&branco,&nulos );
	
	while(voto!=0){
		printf("digite o numero de seu candidato:");
		scanf("%d", &voto);
		
		switch(voto){
		
			case 1:
				candato_1++;
				break;				
		//==============================
			case 2:
				candato_2++;
				break;
			
		//==============================
			case 3:
				candato_3++;
				break;
		//==============================
			case 4:
				candato_4++;
				break;				
		//==============================
			case 5:
				branco++;
				break;				
		//==============================
			case 6:
				nulos++;
				break;				
		//==============================
			case 0:
				break;
		//==============================
	}//==== swite case ====
	}//===== while =====
	resultado=(candato_1+candato_2+candato_3+candato_4+branco+nulos);
	
	printf("a procentagem e do candato_1 %.2f %\n",(candato_1/resultado)*100);
	printf("a procentagem e do candato_2 %.2f %\n",(candato_2/resultado)*100 );
	printf("a procentagem e do candato_3 %.2f %\n",(candato_3/resultado)*100 );
	printf("a procentagem e do candato_4 %.2f %\n",(candato_4/resultado)*100 );
	printf("a procentagem e de brancos %.2f %\n",(branco/resultado)*100);
	printf("a procentagem e de nulos %.2f %\n",(nulos/resultado)*100 );
	
	printf("%d %d %d %d %d %d",candato_1,candato_2,candato_3,candato_4,branco,nulos );
	//===== inprimindo a proxima votação ========
		fprintf(saida,"%d %d %d %d %d %d",candato_1,candato_2,candato_3,candato_4,branco,nulos );
		fprintf(saida,"\n");
	
		
	}//==== else ====
		return 0;
}
