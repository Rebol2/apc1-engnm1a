#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("----------------------------------------------\n");
  printf("       **** SISTEMA DE NOTAS ****\n\n");
  printf("Entre com a nota1: ");
  scanf("%f", &nota1);
  printf("\nEntre com a nota2: ");
  scanf("%f", &nota2);
  float media = (0.4 * nota1) + (0.6 * nota2);
  printf("\n");
  printf("A media final é  : %.1f\n", media);
  printf("\n");
  if (media >= 5.0) {
    printf("Parabens garotão!\n");
  } else {
    printf("Burrão\n");
  }
  return 0;
}