#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, cont; 
	printf("Digite um número inteiro: ");
	scanf("%d", &a);
	printf("Os multiplos de 5 são = ");	
	for(cont=1; cont<=a; cont++){
		while(cont%5==0 && cont>0){
			printf("%d ", cont);
			break;
			}
				
		}
	}
