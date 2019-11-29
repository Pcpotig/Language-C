#include <stdio.h>
#include <locale.h>

typedef struct
{
	float nota1, nota2, nota3;
	
}barco;
charlos(float x, float y, float z)
{
	printf("A média é %.2f",(x+y+z)/3);
	
}
main(){
	setlocale(LC_ALL, "portuguese");
	barco aluno1;
	float nota1, nota2, nota3;
	printf("Digite sua nota\n");
	scanf("%f", &aluno1.nota1);
	printf("Digite a segunda nota\n");
	scanf("%f", &aluno1.nota2);
	printf("Digite a terceira nota DESGRAÇA\n");
	scanf("%f", &aluno1.nota3);
	 
	 printf("OS BARCOS são:\n 1°- %.1f\n 2° - %.1f\n 3° - %.1f\n", aluno1.nota1, aluno1.nota2, aluno1.nota3);
	 charlos(aluno1.nota1, aluno1.nota2, aluno1.nota3);
}

