#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

		char matriz[7][7];
		int a=0;
		int b=0;
		int ma=5;
		int mi=0;

		
		for(a=0; a<7;a++){
			for(b=0;b<7;b++){
				if(b==a){
					matriz[a][b]='x';
					//18/matriz[ma][mi]='x';	
				}
				else{
					matriz[a][b]='-';
				}
			}
		}
	/* 18	for(a=0; a<=5;a++){
			for(b=5;b>=0;b--){
					matriz[a][b]='x';
					a++;
			}
		}*/
		for(a = 0; a<7; a++){
		for(b=0; b<7; b++){	
		printf(" %c ", matriz[a][b]);	
		} printf("\n");}
	return 0;
}
