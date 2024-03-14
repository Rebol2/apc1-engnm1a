#include <stdio.h>

int main(){
  printf("-----------------------------------\n");
  printf("         N O T A  L E G A L        \n");
  printf("-----------------------------------\n");
  printf("ITEM                    QTD   VALOR  \n");
  printf("%-17s %9i %7.2f\n", "Banana Nanica", 10, 15.00);
  printf("%-17s %9i %7.2f\n", "Maca Fuji", 10, 50.00);
  printf("%-17s %9i %7.2f\n", "Uva Globo", 5, 26.00);
  
//printf("Banana nanica    1      R$15.00\n");
//printf("Maca fuji        10     R$50.00\n");
//printf("Uva globo        5      R$26.00\n");
  printf("-------------------------------\n");
  printf("TOTAL.........: R$ 91\n");
  
  
  
  return 0; 
  
} 