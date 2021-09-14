#include <stdio.h>

char oitavas[] = "ABCDEFGHIJKLMNOP", quartas[8], semifinal[4], final[2], ganhador[2];

void rodada(int jogos, char *times, char *ganhadores)
{
  int i, primeiro, segundo;
  
  for (i = 0; i < jogos; i ++) {
  	
    scanf("%d %d", &primeiro, &segundo);
    
    if (primeiro > segundo)
      ganhadores[i] = times[i * 2];
    else
      ganhadores[i] = times[i * 2 + 1];
  }
}  

main() 
{
  rodada(8, oitavas, quartas);
  rodada(4, quartas, semifinal);
  rodada(2, semifinal, final);
  rodada(1, final, ganhador);
  
  printf("%c\n", ganhador[0]);
}
