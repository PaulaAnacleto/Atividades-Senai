#include <stdio.h>
int main(){
	int a, b, c;
	printf("Digite a primeira nota: ");
	scanf("%d", &a);
	printf("Digite a segunda nota: ");
	scanf("%d", &b);
	printf("Digite a terceira nota: ");
	scanf("%d", &c);
	if((a+b)/3>=7){
		printf("Media = %d APROVADO!",(a+b)/3);	
	}else{
			printf("Media = %d REPROVADO!",(a+b)/3);
	}
}
