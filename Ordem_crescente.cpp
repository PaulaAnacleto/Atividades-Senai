#include <stdio.h>
int main(){
	int a, b;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b); 
	if(a<b && a!=b){
		printf("%d, %d", a,b);
	}else if (a==b){
		printf("%d=%d", a, b);
	}else{
			printf("%d, %d", b, a);
	}
}
