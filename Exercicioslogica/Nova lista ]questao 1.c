// 1 - Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calculare escrever a �rea do ret�ngulo (base*altura).
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	
	float	base, altura, r;
	
printf("Digite o valor da base: \n");
scanf("%f", &base);
printf("Digite o valor da altura: \n");
scanf("%f", &altura);
r = base*altura;
printf("A �rea do tri�ngulo �: %.1f", r);
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
