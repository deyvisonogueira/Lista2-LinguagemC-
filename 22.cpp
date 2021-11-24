/*22 Utilizando a função criada acima, dada uma matriz real NxM, verificar se existem elementos repetidos na
mesma. Mostrar os valores repetidos*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define MAX 3
int main(int argc, char *argv[])
{
  int MAT[MAX][MAX];
  int linha,coluna;
  for (linha=0;linha<MAX;linha++){
      for(coluna=0;coluna<MAX;coluna++){
        scanf("%d",&MAT[linha][coluna]);}}
  for (linha=0;linha<MAX;linha++){
      for(coluna=0;coluna<MAX;coluna++){
         if((MAT[0][0]==MAT[0][coluna+1]) && (MAT[0][0] == MAT[linha+1][0]))
        printf("Nao é solução");}}               
  system("PAUSE");	
  return 0;
}
