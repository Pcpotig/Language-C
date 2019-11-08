//2 - Escreva um algoritmo para ler o número total de eleitores de um município, o númerode votos brancos, nulos e válidos. Calcular e escrever o percentual que cada umrepresenta em relação ao total de eleitores.
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
printf("Digite a quantidade de votos válidos:\n");
scanf("%f", &v);


	printf("A porcentgem de votos brancos é: %.1f%%\n", vb/te*100);
		printf("A porcentgem de votos nulos é: %.1f%%\n", vn/te*100);
		printf("A porcentgem de votos válidos é: %.1f%%\n", v/te*100);	
	
	
	
	
//%.1f%% 	
	
	
	
	
	
	system("pause");
}
