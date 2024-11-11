#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, qtd=0; 
	do{
	printf("Digite um valor: ");
	scanf("%f", &a);
	qtd++;
	}while (a>=0);{
	printf("Foram digitados %f números!",--qtd);
	}
}	
