//4 - Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicandose este n�mero � par ou �mpar, e se � positivo ou negativo.
#include <stdio.h>
#include <locale.h>
main(){
int n;
	setlocale(LC_ALL,"portuguese");	
printf("Digite um n�mero:\n ");
scanf("%d",&n );
if(n%2==0){
//NAO TEM PONTO E VIRGULA DEPOIS DA DESGRA�A DO IF	
	printf("N�mero par %d", n);
	
}
	
else
{
	
	printf("N�mero �mpar %d\n", n);
}	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
