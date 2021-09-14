#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int dimensao;
  int m[1000][1000] = {{0}};
  int dirX[1000] = {0};
  int dirY[1000] = {0};
  int aux[1000] = {0};
  int direcao;
  int vezes;
  int indiceX = 0;
  int indiceY = 0;
  int n;
  int i;
  int i2;

  scanf("%d", &dimensao);

  direcao = dimensao % 2 == 0 ? -1 : 1;

  for(i = 1, vezes = 1, n = 0; i <= dimensao * 2 - 1; i++)
  {
    for(i2 = 0; i2 < vezes; i2++)
      aux[n++] = direcao;

    if(direcao != 0)
      direcao = 0;
    else
    {
      direcao = vezes % 2 != 0 ? 1 : -1;
      direcao *= dimensao % 2 == 0 ? 1 : -1;
      vezes++;
    }
  }

  for(i = 0; i < n - 1; i++)
    dirX[i] = aux[n - 2 - i];

  for(i = 1, vezes = 1, n = 0, direcao = 0; i <= dimensao * 2 - 1; i++)
  {
    for(i2 = 0; i2 < vezes; i2++)
      aux[n++] = direcao;

    if(direcao != 0)
    {
      direcao = 0;
      vezes++;
    }
    else
    {
      direcao = vezes % 2 != 0 ? 1 : -1;
      direcao *= dimensao % 2 == 0 ? 1 : -1;
    }
  }

  for(i = 0; i < n - 1; i++)
    dirY[i] = aux[n - 2 - i];

  for(i = 0, direcao = 0; i < dimensao * dimensao; i++)
  {
    scanf("%d", &m[indiceX][indiceY]);
    indiceX += dirX[direcao];
    indiceY += dirY[direcao];
    direcao++;
  }

  for(i = 0; i < dimensao; i++)
  {
    for(i2 = 0; i2 < dimensao; i2++)
      printf("%d\n", m[i][i2]);
  }

  return 0;
}
