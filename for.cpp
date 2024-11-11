#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, i; 
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("Os divisores são: ");
	for (b=1; b<=a; b++){
		if (a%b==0)
		printf("\t%d", b);
	}
}	

