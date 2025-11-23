#include <stdio.h>

int main() {
  int startTime, finishTime,totalTime;
  scanf("%d %d", &startTime, &finishTime);

  if(startTime >= finishTime) {
    totalTime = (finishTime + 24) - startTime;
  } else if(finishTime > startTime) {
    totalTime = finishTime - startTime;
  }

  printf("O JOGO DUROU %d HORA(S)\n", totalTime);
  return 0;
}