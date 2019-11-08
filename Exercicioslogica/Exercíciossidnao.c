//Elabore um algoritimo que some dois números inteiros e diga se o resultado é par ou impar.#inlcude <stdio.h>
#include <stdio.h>
#include <locale.h>

main (){
setlocale(LC_ALL, "Portuguese");

int n1, n2, b;

printf("Digite o primeiro número:\n");
scanf("%d", &n1);
printf("Digite o segundo número:\n");
scanf("%d", &n2);
b = n1+n2;
	if (b%2==0)
{
	printf("O número é par: %d\n", b);
	
	}	
	else
{
	printf("O número é impar: %d\n", b);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
