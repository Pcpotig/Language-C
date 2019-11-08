// 1 - Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calculare escrever a área do retângulo (base*altura).
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
printf("A área do triângulo é: %.1f", r);
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
