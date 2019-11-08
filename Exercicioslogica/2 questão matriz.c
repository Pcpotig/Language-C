/* Elabore um algoritimo que leia 2 matrizes bidimensionais (4,4). Adicione valores a
essas matrizes. Some as duas matrizes e adicione em outra matriz. Imprima a
matriz com o resultado. */
#include <stdio.h>
#include <locale.h>
main(){
		setlocale(LC_ALL, "portuguese");
		int mat[4][4], mat2[4][4],matsoma[4][4], i,j;
			printf("Primeira matriz\n");
			printf("\n");
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					printf("Digite um valor p/ primeira matriz %d - %d\n", i, j);
					scanf("%d", &mat[i][j]);
				}
			}
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					printf("Posição %d - %d Valor: %d\n", i, j, mat[i][j]);
				}
			}
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					printf("Digite um valor p/ segunda matriz %d - %d\n", i, j);
					scanf("%d", &mat2[i][j]);
				}
			}
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					printf("Posição %d - %d Valor: %d\n", i, j, mat2[i][j]);
				}
			}
			
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					matsoma[i][j]= mat[i][j]+mat2[i][j];
					printf("A soma dos índices:%d - %d Mt1 + Mt2 é: %d\n", i,j, matsoma[i][j]);
				}
				
			}		
				
			
			
}
