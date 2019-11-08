//3 - Faça um algoritmo que leia dois valores inteiros (X e Y) e apresente o resultado doquadrado da soma dos valores lidos.
#include <stdio.h>
#include <locale.h>
main(){
	int x,y,qsoma;
	setlocale(LC_ALL,"portuguese");
printf("Digite o primeiro valor:\n");
scanf("%d", &x);
printf("Digite o segundo valor:\n");
scanf("%d", &y);
qsoma= (x+y)*(x+y);	
printf("O quadrado da soma dos números digitados acima é:%d\n", qsoma);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
