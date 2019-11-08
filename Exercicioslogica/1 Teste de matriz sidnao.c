/*Elabore um algoritimo que leia 2 matrizes bidimensionais (2,2). Adicione valores a
essas matrizes e depois imprima na tela os valores de cada uma.*/
#include <stdio.h>
#include <locale.h>
main(){
		setlocale(LC_ALL, "portuguese");
		int mat[2][2], i, j, mat2[2][2];
			
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Digite um valor p/ primeira matriz: %d - %d\n", i, j); /*I e J são 0 nesse momento, irá mostrar na matriz 0 -0 */
				scanf("%d", &mat[i][j]);
			}
		}
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("Posição %d - %d - Valor: %d\n", i, j, mat[i][j]);
				}
			}
			for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Digite um valor p/ segunda matriz: %d - %d\n", i, j); /*I e J são 0 nesse momento, irá mostrar na matriz 0 -0 */
				scanf("%d", &mat2[i][j]);
			}
		}
			for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("Posição %d - %d - Valor: %d\n", i, j, mat2[i][j]);
				}
			}
}
