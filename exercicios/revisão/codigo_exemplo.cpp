#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ufs[30000][3]={'0'}; 
int valores[30000]={0};

void carrega_vetor() 
{

}

void numero_perfeito() 
{

}

void conta_uf() 
{

}

void conta_divisores() 
{

}

int main() 
{ 
	FILE * arquivo_aberto; 
	int i=0;
	
	arquivo_aberto = fopen ("dados.dat", "r"); 
    while (!feof(arquivo_aberto) )
		{
            fscanf(arquivo_aberto,"%s %d", ufs[i], &valores[i]); 
            printf("\n %d %s %d", i ,  ufs[i], valores[i]);
			 i++;
        }
    fclose(arquivo_aberto);
    return(0); []
}
