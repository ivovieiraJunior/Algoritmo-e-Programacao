#include <stdio.h>
#include <stdlib.h>

/*			Atividade 07
�Fa�a um programa de agenda telef�nica, contendo Nome e Telefone.
�O programa dever� ler um nome e o telefone e armazenar em um arquivo.
�Todas vez que o programa for aberto/carregado, 
dever� mostrar todo o conte�do da agenda. */

int main(int argc, char *argv[]) {
	char nome[10];
	char telefone[15];
	char colunanome[5];
	char colunatell[10];
	int continuar=1;
	int i=0;
	
	FILE *agenda=fopen("agenda.txt","a+");
		if(agenda==NULL){
			printf("Erro na cria��o do arquivo.");
		}
	else{
		while(!feof(agenda)){
			fscanf(agenda,"%s %s %s %d",colunanome,nome,colunatell,&telefone);
			printf("nome %s telefone %d\n",nome,telefone);
			i++;
		}
		while(continuar!=0){
			printf("digite o nome e o telefone e se querer continuar digite 1 para sair 0:\n");
			scanf("%s %d %d", nome, &telefone, &continuar);
			fprintf(agenda,"nome %s telefone %d\n",nome, telefone);
		}
	}
	fclose(agenda);	
	system("pause");
	return 0;
}
