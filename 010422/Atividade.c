#include <stdio.h>
#include <stdlib.h>

void At1() {
  int numero;

  printf("Digite um n%cmero: ", 163);
  scanf("%d", &numero);

  if (numero > 10) {
    printf("Maior do que 10.");
  }

  else {
    printf("Cai fora.");
  }
}

void At2() {
  int numero;

  printf("Digite um n%cmero: ", 163);
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("N%cmero par.", 163);
  }

  else {
    printf("N%cmero %cmpar.", 163, 161);
  }
  
}

void main(){
  At1();
  At2();
}
