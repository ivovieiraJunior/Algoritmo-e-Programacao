#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* Faça um programa em que leia dois valores, sempre o valor inicial maior que o valor final. O programa deverá calcular, enquanto valor
inicial for maior que o valor final, com intervalo a soma dos dois valores anteriores.
Por exemplo, se forem informados os valores: Inicial=500, Final=0, deverá gerar a seguinte saída em arquivo:
Valor: 500 i=1 ...(1+0)
valor: 499 i=2 ...(1+1)
Valor: 497 i=3 ...(2+1)
Valor: 494 i=5 ...(3+2)
Valor: 489 i=8 ...(5+3)
Valor: 481 i=13 ...(8+5)
Valor: 468 i=21 ...(13+8)
Valor: 447 i=34 ...(21+13)
Valor: 413 i=55 ...(34+21)
Valor: 358 i=89 ...(55+34)
Valor: 269 i=144 ...(89+55)
Valor: 125 i=233 ...(144+89)
Obs.: Se o valor inicial não foi maior que o valor final, deverá mostrar uma mensagem de erro e voltar a solicitar os valores.
 */

int main(int argc, char** argv) {
	int valor_inicial=0;
	int valor_final=0;
	int j;
	int j_antes;
	int i=1;
	int resultado=1;
	int conta_while;
	
	FILE * arquivo;
	arquivo=fopen("saida.txt","w+");
	if(arquivo==NULL)
			printf("ERRO ao abrir o arquivo!!");
			
	else{
			
		printf("digite o valor inicial:");
		scanf("%d",&valor_inicial);
		printf("digite o valor final;");
		scanf("%d",&valor_final);
		while(valor_final>valor_inicial){
			printf("valor final maior que valor inicial digite novamente:");
	//	printf("digite o valor inicial:");
	//	scanf("%d",&valor_inicial);		
		printf("digite o valor final;");
		scanf("%d",&valor_final);
		}
		j=0;
		while(valor_inicial>resultado){
		
		fprintf(arquivo,"valor:%d ",valor_inicial);
		
		j_antes=j;
		
		j=i;
		
		i+=j_antes;
		fprintf(arquivo,"i:%d",i);
		fprintf(arquivo,"...(%d+%d)\n",i-j_antes,j_antes);
		
		
		valor_inicial=valor_inicial -i;	
		
			
		}
	}
	fclose(arquivo);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
