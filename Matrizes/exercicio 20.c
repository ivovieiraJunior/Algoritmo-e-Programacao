#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		char matriz[7][7];
	int a=0;
	int b=0;
	int aa=1;
	
	//iniciando ela 
	for(a=0; a<7;a++){
			for(b=0;b<7;b++){
				if(a<=4 && b<3 || b<=4 && b<7 )
				matriz[a][b]='x';
			}printf(" %c ", matriz[a][b]);
		}printf("\n"); 
		
	return 0;
}
