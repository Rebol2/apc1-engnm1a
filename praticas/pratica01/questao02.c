/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
  */
#include <stdio.h>

int main() { 
  int base = 2;
  int altura = 3;

  printf("entre com a medida da base:");
  int deu_certo = scanf("%i", &base);
  printf("entre com a medida da altura:");
  int deu_c = scanf("%i", &altura);
  
  int area = base * altura / 2;

  printf("A area do triangulo é: %i\n", area);
    
return 0;
}