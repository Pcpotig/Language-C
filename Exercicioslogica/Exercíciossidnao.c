//Elabore um algoritimo que some dois n�meros inteiros e diga se o resultado � par ou impar.#inlcude <stdio.h>
#include <stdio.h>
#include <locale.h>

main (){
setlocale(LC_ALL, "Portuguese");

int n1, n2, b;

printf("Digite o primeiro n�mero:\n");
scanf("%d", &n1);
printf("Digite o segundo n�mero:\n");
scanf("%d", &n2);
b = n1+n2;
	if (b%2==0)
{
	printf("O n�mero � par: %d\n", b);
	
	}	
	else
{
	printf("O n�mero � impar: %d\n", b);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
