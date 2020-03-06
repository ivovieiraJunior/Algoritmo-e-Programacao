#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int a, b;
char opcao[4]="sim";
printf("Valor :");
scanf("%d",&a);
{
printf("%d ",a);
++a;
printf("Continuar [sim/nao]:");
scanf("%s ",&opcao);
}
system("pause");
}

