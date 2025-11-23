#include <stdio.h>

int main() {
  double salary;
  scanf("%lf", &salary);
  
  double increase;
  int percentage;
  
  if (salary <= 400.00) {
    percentage = 15;
  } else if (salary <= 800.00) {
    percentage = 12;
  } else if (salary <= 1200.00) {
    percentage = 10;
  } else if (salary <= 2000.00) {
    percentage = 7;
  } else {
    percentage = 4;
  }
  
  increase = salary * percentage / 100.0;
  double new_salary = salary + increase;
  
  printf("Novo salario: %.2lf\n", new_salary);
  printf("Reajuste ganho: %.2lf\n", increase);
  printf("Em percentual: %d %%\n", percentage);
  
  return 0;
}