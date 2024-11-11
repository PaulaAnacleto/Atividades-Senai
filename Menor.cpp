#include <stdio.h>
//Elabore um algoritmo que leia 3 valores inteiros e diga qual dos 3 é o menor
int main(){
	int a, b, c;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	if(a<b && a<c){
		printf("%d menor!", a);
	}else if(b<a && b<c){
		printf("%d menor!", b);
	}else{
		printf("%d menor!", c);
}
}
