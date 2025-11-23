#include <stdio.h>

int main() {
  float n1, n2, n3, n4, n5, average, fAverage;
  
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  
  average = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
  
  printf("Media: %.1f\n", average);
  
  if (average >= 7.0) {
    printf("Aluno aprovado.\n");
  } 
  else if (average < 5.0) {
    printf("Aluno reprovado.\n");
  } 
  else {
    printf("Aluno em exame.\n");
    
    scanf("%f", &n5);
    printf("Nota do exame: %.1f\n", n5);
    
    fAverage = (average + n5) / 2.0;
    
    if (fAverage >= 5.0) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    
    printf("Media final: %.1f\n", fAverage);
  }

  return 0;
}
