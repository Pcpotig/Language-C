//Elabore um algoritimo que leia um valor inteiro e diga se ele � maior, menor ou igual a 10
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
int n;	
printf("Digite um n�mero: \n");
scanf("%d", &n);
if(n>10)
{
	printf("O n�mero � maior que 10! %d\n", n);
		}		
else
	if(n==10){
	printf("O n�mero � igual a 10! %d\n", n);
	}
	else {
		printf("O n�mero � menor que 10! %d\n", n);
	}	
	
	
	
	
	
}
