#include <stdio.h>

main () {
	float media;
	printf ("Informe a m�dia: ");
	scanf ("%f", &media);
	
	if (media>=7){
			printf("Aprovado!");
	}
	else if(media>=5){
		printf("Recupera��o!");
	}
	
	else{
		printf("Reprovado!");
	}
}
