#include <stdio.h>

int main() {
  int i, n;
  double price[] = {4.00, 4.50, 5.00, 2.00, 1.50};
  scanf("%d %d", &i, &n);
  printf("Total: R$ %.2lf\n", price[i - 1] * n);

  return 0;
}