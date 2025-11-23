#include <stdio.h>

int main() {
  int startHr, startMin, endHr, endMin, startTotalMin, endTotalMin;
  scanf("%d %d %d %d", &startHr, &startMin, &endHr, &endMin);

  if(startHr == endHr && endMin > startMin) {
    startTotalMin = startMin;
    endTotalMin = endMin;
  } else if(startHr >= endHr) {
    startTotalMin = (startHr * 60) + startMin;
    endTotalMin = ((endHr + 24) * 60) + endMin;
  } else {
    startTotalMin = (startHr * 60) + startMin;
    endTotalMin = (endHr * 60) + endMin;
  }

  int totalInMin = endTotalMin - startTotalMin;
  int hr, min;
  hr = totalInMin / 60;
  min = totalInMin % 60;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);



  return 0;
}