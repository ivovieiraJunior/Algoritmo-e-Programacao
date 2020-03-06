#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz1 [2][2] = {3,4,2,6};
	int matriz2 [2][2] = {5,8,7,1};
	int matrizresult [2][2];
	int multiplicacao[2][2];
	int i=0;
	int j=0;
	
	for(i = 0; i<2; i++){
		for(j=0; j<2; j++){	
			printf(" %d, ", matriz1[i][j]);	
			} printf("\n");}
	 	printf("mais a matriz\n");
	for(i = 0; i<2; i++){
		for(j=0; j<2; j++){	
			printf(" %d, ", matriz1[i][j]);	
			} printf("\n");}
	printf("o resultado eh \n");
	 	for(i=0;i<2;i++){
	 		for(j=0;j<2;j++){
	 			matrizresult[i][j]+= matriz1[i][j] +matriz2[i][j];
			 }
		 }
		for(i = 0; i<2; i++){
		for(j=0; j<2; j++){	
			printf(" %d, ", matrizresult[i][j]);	
			} printf("\n");}
		printf("multiplicaçao dessas matrizes\n");
		
		multiplicacao[0][0] = matriz1[0][0]*matriz2[0][0]+matriz1[0][1]*matriz2[1][0];
		multiplicacao[0][1] = matriz1[0][0]*matriz2[0][1]+matriz1[0][1]*matriz2[1][1];
		multiplicacao[1][0] = matriz1[1][0]*matriz2[0][0]+matriz1[1][0]*matriz2[1][0];
		multiplicacao[1][1] = matriz1[0][0]*matriz2[0][1]+matriz1[0][1]*matriz2[1][1];
		
		for(i = 0; i<2; i++){
		for(j=0; j<2; j++){	
			printf(" %d, ", multiplicacao[i][j]);	
			} printf("\n");}
	return 0;
}
// a) Realize a soma das tabelas;
 //b) Faça a multiplicação das tabelas;
