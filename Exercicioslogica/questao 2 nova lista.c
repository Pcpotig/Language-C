//2 - Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�merode votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada umrepresenta em rela��o ao total de eleitores.
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "portuguese");	
float te, vb, vn,t, v;

 	
printf("Digite a quantidade total de eleitores: \n");
scanf("%f", &te);
printf("Digite a quantidade de votos brancos:\n");
scanf("%f", &vb);
printf("Digite a quantidade de votos nulos:\n");
scanf("%f", &vn);
printf("Digite a quantidade de votos v�lidos:\n");
scanf("%f", &v);


	printf("A porcentgem de votos brancos �: %.1f%%\n", vb/te*100);
		printf("A porcentgem de votos nulos �: %.1f%%\n", vn/te*100);
		printf("A porcentgem de votos v�lidos �: %.1f%%\n", v/te*100);	
	
	
	
	
//%.1f%% 	
	
	
	
	
	
	system("pause");
}
