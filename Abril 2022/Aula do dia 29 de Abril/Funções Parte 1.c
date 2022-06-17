#include <stdio.h>
#include <math.h>

int main(void) {
  double pow(double x, double y);
  double x, y = 2;

  printf("Digite um numero: ");
  scanf("%lf", &x);
  printf("Numero elevado a 2: %g", pow(x,y));
  return 0;
}
