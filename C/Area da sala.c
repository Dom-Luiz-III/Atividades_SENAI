#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float cmp;
		printf("Informe o Comprimento: ");
		scanf("%f",cmp);
	float lrg;
		printf("%f",&lrg);
	printf("A �rea da sala �: %2fm",cmp*lrg);
}
