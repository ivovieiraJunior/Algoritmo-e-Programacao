#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/*DESAFIO: Faça	um programa que leia o arquivo de texto entrada04.txt e mostre quantas vezes cada UF aparece no arquivo.*/
main(){
FILE * input_text, *output_text;
char line[1024];
char * last;
char uf[3];
char virgula[2];
float valor;


char uf_existentes[27][3] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"}; 
int uf_contagem[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 


float valueP= 0;  
int contt = 0, cont = 0;
setlocale(LC_CTYPE,"");

//Altera a Cor de Saida (https://ss64.com/nt/color.html)
system("color 1f");

	if((input_text = fopen("entrada04.txt","r")) == NULL)
		printf("\n[ERRO]Travou o Nintendo!\n");
	else
		printf("\n[SUCESSO]Sucesso ao abrir o arquivo!\n\n");
		printf("\n\nImprimindo a saida\n\n");
		output_text = fopen("desafio05_novo.txt","w");
		
		// Lendo a primeira linha completa com FGETS - Le toda a linha até o enter ou \n
		fgets(line, 1024, input_text);
		printf("Mostrando o Cabecalho: %s\n", line);
			
		while(!feof(input_text))
		{
			fscanf(input_text,"%2s%1s%f ", uf, virgula, &valor);
			
			//Descomentar para validar entrada de Dados
			//printf("%s -  %s - %f \n", uf, virgula, valor);
			//sleep(1);
			
			//Também Poderia ser feito com 27 IFs...
			for (int i = 0; i< 27; i++)
			{
				if (strcmp(uf, uf_existentes[i])==0)
						uf_contagem[i]++; 
			}
				
		}
		
		//Após e Somente após o While (leitura)	mostrar o resultado
		for (int i = 0; i< 27; i++)
			{
				printf("\nA UF %s aparece %d vezes", uf_existentes[i], uf_contagem[i]); 
			}
									
									
fclose(input_text);
fclose(output_text);
printf("\n");
system("pause");
}
