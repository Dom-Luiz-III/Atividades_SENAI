#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	float copias,total;
	
	
	printf("Por favor, informe o total de c�pias compradas: ");
	scanf("%f", &copias);
	
	if(copias > 100 )
	{
		total = copias*0.20;
	}
	else
	{
		total = copias*0.25;
	};
	printf("O Total da impress�o foi R$%.2f\n", total);
};
