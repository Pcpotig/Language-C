//Elabore um algoritimo que leia um valor inteiro e diga se ele é maior, menor ou igual a 10
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
int n;	
printf("Digite um número: \n");
scanf("%d", &n);
if(n>10)
{
	printf("O número é maior que 10! %d\n", n);
		}		
else
	if(n==10){
	printf("O número é igual a 10! %d\n", n);
	}
	else {
		printf("O número é menor que 10! %d\n", n);
	}	
	
	
	
	
	
}
