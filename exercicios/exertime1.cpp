#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


/* 3) Fazer um programa para gerar 6 números aleatórios, entre 01 e 60. */

int main(int argc, char *argv[]) {
	int i=1;
	while(i<=6){
		srand(time(NULL));
		printf("%d\n", rand()%60);
		i++;
		sleep(1);
	}
	return 0;
}
