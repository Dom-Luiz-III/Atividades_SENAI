#include <stdio.h>
#include <locale.h>

int main(){
	int n,r;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe os n�meros para sair de forma decimal e contr�ria: \n");
	scanf("%d", &n);
	
	printf("Digitos: \n");
	
	while(n>0){
		r = n%10;
		n = n/10;
		printf ("%d\n", r);
	}
	
	return 0;
}
