//4 - Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicandose este número é par ou ímpar, e se é positivo ou negativo.
#include <stdio.h>
#include <locale.h>
main(){
int n;
	setlocale(LC_ALL,"portuguese");	
printf("Digite um número:\n ");
scanf("%d",&n );
if(n%2==0){
//NAO TEM PONTO E VIRGULA DEPOIS DA DESGRAÇA DO IF	
	printf("Número par %d", n);
	
}
	
else
{
	
	printf("Número ímpar %d\n", n);
}	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
