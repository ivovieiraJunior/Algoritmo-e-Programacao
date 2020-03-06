#include <stdio.h>
#include <stdlib.h>
#define tam 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char mat[tam][tam];
	int i;
	int j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i<=tam/2 && j<tam/2 || i>=tam/2 && j>=tam/2 ){
				mat[i][j]='X';
			}
			else{
				mat[i][j]='-';
			}printf("%c", mat[i][j]);
				
		}printf("\n");
	}
	return 0;
}
