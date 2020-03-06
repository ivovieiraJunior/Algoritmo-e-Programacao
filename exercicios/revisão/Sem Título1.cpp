#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void carregaVetor(char *ufs, int * valores) 
{ 	
	FILE * dados; 
	int i=0;
	dados = fopen ("dados.dat", "r"); 
    while (!feof(dados) )
		{
            fscanf(dados,"%s %d", ufs[i], &valores[i]); 
            printf("\n %d %s %d", i ,  ufs[i], valores[i]);
			 i++;
        }
    
    fclose(dados);
}
void   conta_uf(char * uf[30000][3]) {
int i = 0;
char uf_existentes[27][3] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"}; 
int uf_contagem[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i< 30000; i++){
			for (int j = 0; j<27 ; j++){				
				if (strcmp(uf_existentes[j],uf[i])==0)
						uf_contagem[i]++; 
			}		
		}
	for (int i = 0; i< 27; i++){
				printf("\nA UF %s aparece %d vezes", uf_existentes[i], uf_contagem[i]); 
			}
}

int main() 
{ 
	char ufs[30000][3]={'0'}; 
	int valores[30000]={0};
	
	carregaVetor(* ufs, *valores);
	conta_uf(* ufs);
	
    return(0);
}
