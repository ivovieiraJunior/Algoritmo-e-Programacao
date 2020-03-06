#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void carregaVetor(FILE *dados, char ufs[30000][3], int valores[]) { 
int i=0;
	while (!feof(dados) )
		{
            fscanf(dados,"%s %d", ufs[i], &valores[i]); 
            printf("\n %d %s %d", i ,  ufs[i], valores[i]);
			 i++;
        }

}
void    conta_uf(char  uf[30000][3]) {
char uf_existentes[27][3] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"}; 
int uf_contagem[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	for (int i = 0; i< 30000; i++){
			for (int j = 0; j<27 ; j++){				
				if (strcmp(uf[i],uf_existentes[j])==0){	
						uf_contagem[j]++; 
				}
			}	
		}
		printf("\n");
	for (int c = 0; c< 27; c++){
				printf("\nA UF %s aparece %d vezes", uf_existentes[c], uf_contagem[c]); 
			}
}

int main() 
{ 
	char ufs[30000][3]={'0'}; 
	int valores[30000]={0};
	
	FILE * dados; 
	int i=0;
	dados = fopen ("dados.dat", "r"); 
    carregaVetor(dados, ufs, valores);
    conta_uf(ufs);
    fclose(dados);
	
    return(0);
}
