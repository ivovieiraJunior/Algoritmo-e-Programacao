#include <iostream>

/* 3. Desenvolva um algoritmo que calcule o fatorial de um n´umero n. */
int fatorial(int a,int b){
	
	if(b<=a)		
	return (a * fatorial(a-1,b+1));
	return a;
} 

int main(int argc, char** argv) {
	int x;
	int n=0;
	printf("digite o valor: ");
	scanf("%d",& x);
	printf("o fatorial eh:%d",fatorial(x,n));
	return 0;
}
