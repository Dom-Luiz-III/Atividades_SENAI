#include <stdio.h>

main (){
	int a, b, maior, valor[10];
	
	for(a=0;a<10;a++){
		printf("Informe um valor: \n");
		scanf("%d", &valor[a]);
	}
	/*Nesse comando, a vari�vel "maior" receber� o primeiro vetor, e ele ser� comparado com os outros para saber qual o maior n�mero de fato.
	 Ele far� isso com outra vari�vel, o "b", que ficar� pulando a vari�vel "valor" de 1 em 1 at� dar 10, ajudando assim a comparar os outros n�meros.*/
	maior = valor[0];
	for(b=1;b<10;b++){
		if(valor[b]>maior){
			maior=valor[b];
		}
	}
	printf("O maior valor eh: %d", maior);
	
	return 0;
};
