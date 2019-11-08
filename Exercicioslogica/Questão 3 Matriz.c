/*Elabore um algoritimo que leia 2 matrizes bidimensionais (6,6). Adicione valores a
essas matrizes. Some as duas matrizes e adicione em outra matriz. Verifique se os
numeros da matriz resultado são pares ou impares e imprima na tela. */
#include <stdio.h>
#include <locale.h>
main(){
		setlocale(LC_ALL, "portuguese");
		int mat[6][6], mat2[6][6],matsoma[6][6], i,j;
			printf("PRIMEIRA Matriz\n");
			printf("\n");
			
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("Digite um valor p/ primeira matriz %d - %d\n", i, j);
					scanf("%d", &mat[i][j]);
				}
			}
			
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("Posição %d - %d Valor: %d\n", i, j, mat[i][j]);
				}
			}
			printf("SEGUNDA Matriz");
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("Digite um valor p/ segunda matriz %d - %d\n", i, j);
					scanf("%d", &mat2[i][j]);
				}
			}
			
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("Posição %d - %d Valor: %d\n", i, j, mat2[i][j]);
				}
			}
			
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					matsoma[i][j]= mat[i][j]+mat2[i][j];
				}
			}
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(matsoma[i][j]%2==0){
						printf("O número é par: %d\n", matsoma[i][j]);
					}
					else{
						printf("O número é ímpar: %d\n", matsoma[i][j]);
					}
				}
			}		
}
