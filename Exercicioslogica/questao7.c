//Elabore um algoritimo que leia 3 notas de um aluno e diga se ele est� aprovado ou reprovado. M�dia de aprova��o 7,0.
#include <stdio.h>
#include <locale.h>
main(){

	setlocale(LC_ALL, "portuguese");	
float not1, not2, not3, med;

	
printf("Digite a primeira nota: \n");
scanf("%f", &not1);
printf("Digite a segunda nota: \n");
scanf("%f", &not2);
printf("Digite a terceira nota: \n");
scanf("%f", &not3);
med = (not1 + not2 + not3)/3;
if(med>7)
{
	printf("Aluno aprovado pela m�dia %.2f\n", med);
	
	}	
	
else
{
	printf("Aluno reprovado pela m�dia %.2f\n", med);
}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
