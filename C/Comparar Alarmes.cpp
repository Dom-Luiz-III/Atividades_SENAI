#include <stdio.h>
#include <locale.h>

int main (){
	int x, y, h, hx, hy;

	setlocale(LC_ALL,"Portuguese");
	
	h=0;
	
	printf("Informe a cada quantas horas o alarme X tocar�: \n");
		scanf("%d", &x);
	printf("Informe quantas horas o alarme Y tocar�: \n");
		scanf("%d", &y);
	
	hx = x;
	hy = y;
	
	while ((h!=hx) || (h != hy)){
		if (h == hx){
			hx += x;
		}
		if (h == hy){
			hy += y;
		}
		h++;
	}
	printf("\nOs dois alarmes tocar�o ao mesmo tempo em %d horas.", h);
	return 0;
}
