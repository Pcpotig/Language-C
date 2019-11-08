//Elabore um algoritimo que leia dois valores inteiros e imprima-os em ordem crescente.
#include <stdio.h>
#include <locale.h>
main(){
int n1, n2;

printf("digite um valor \n");
scanf("%d", &n1);
printf("digite o segundo valor\n ");
scanf("%d", &n2);
	if(n1<n2){
	
		 printf("Ordem crescente %d depois %d", n1, n2);
	
}

	else{
		
	printf("Ordem crescente %d depois %d", n2, n1);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
system("pause");	
}

