#include <stdio.h>

int main() {
  double a, b, c, A, B, C, temp;
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a < b) { temp = a; a = b; b = temp; }
  if (a < c) { temp = a; a = c; c = temp; }
  if (b < c) { temp = b; b = c; c = temp; }
  
  A = a; B = b; C = c;

  if (A >= B + C) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    double A2 = A * A;
    double B2C2 = B * B + C * C;
    
    if (A2 == B2C2) {
      printf("TRIANGULO RETANGULO\n");
    } else if (A2 > B2C2) {
      printf("TRIANGULO OBTUSANGULO\n");
    } else {
      printf("TRIANGULO ACUTANGULO\n");
    }
    
    // Check equilateral or isosceles
    if (A == B && B == C) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (A == B || B == C || A == C) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}