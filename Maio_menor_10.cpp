#include <stdio.h>
int main(){
	int a; 
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	if(a>10){
		printf("%d maior que 10!");
	}else if(a==10){
		printf("%d maior que 10!");
	}else{
		printf("%d igual a 10!");
	}
}
