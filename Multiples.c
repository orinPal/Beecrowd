#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d",&a, &b);
  if(a < b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if(a % b == 0) {
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
  return 0;
}