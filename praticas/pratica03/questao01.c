/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {
  int numero = 0;
  printf("entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  if (deu_certo) {
  int eh_par = numero % 2 == 0;
  if (eh_par) {
    printf("o numero é par\n");
  } else {
    printf("o numero é impar\n");
  }
  
  return 0;
}
