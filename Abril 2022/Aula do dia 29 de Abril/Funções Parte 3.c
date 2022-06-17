#include <stdio.h>
#include <math.h>

int cubo(const int base) {
  static int chamadas = 0;
  printf("Já calculei %d cubos\n", ++chamadas);
  return (base * base * base);
}

int main(void) {
  printf("O cubo de 1 é %d\n", cubo(1));
  printf("O cubo de 2 é %d\n", cubo(2));
  printf("O cubo de 3 é %d\n", cubo(3));
  printf("O cubo de 4 é %d\n", cubo(4));
  printf("O cubo de 5 é %d\n", cubo(5));
  printf("O cubo de 6 é %d\n", cubo(6));
  printf("O cubo de 7 é %d\n", cubo(7));
  printf("O cubo de 8 é %d\n", cubo(8));
  printf("O cubo de 9 é %d\n", cubo(9));
  printf("O cubo de 10 é %d\n", cubo(10));
  return 0;
}
