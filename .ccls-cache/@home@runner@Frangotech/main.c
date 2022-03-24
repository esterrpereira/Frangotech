#include <stdio.h>

int main(void) {
  
  float chip , anel , frangos, total;

  printf("Digite a quantidade de frangos: ");
  scanf("%f",&frangos);

  anel = frangos  * 3.5 * 2;
  chip = frangos * 4;
  total = anel + chip;
  

  printf("O gasto total foi de: %f ", total);
  
}