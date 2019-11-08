#include <stdio.h>


main()
{
int mat[2][2],i,j;


for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("Digite um valor %d - %d\n",i,j);
scanf("%d",&mat[i][j]);
}
}


for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("Posicao %d - %d - valor: %d\n",i,j,mat[i][j]);

}
}


}
