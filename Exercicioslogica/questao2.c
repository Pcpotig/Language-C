//Elabore um algoritimo que leia dois números inteiros e diga qual é o menor.
#inlcude <stdio.h>
#include <locale.h>

main (){
setlocale(LC_ALL, "Portuguese");

int x,y;
 printf("Digite o primeiro valor: \n");
 scanf("%d", &x);
 printf("Digite o segundo valor: \n");
 scanf("%d", &y);
 
 if(x<y)
 {
 		printf("o menor numero e: %d", x);
 	
 }
	
 else 
 {
 	printf("o menor numero e: %d", y);
	 }	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
}
