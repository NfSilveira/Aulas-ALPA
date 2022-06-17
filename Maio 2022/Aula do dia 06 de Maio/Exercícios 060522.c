#include <stdio.h>

void forN() {
  int i, sum = 0, square, n;

  printf("Digite N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    square = i * i;
    sum = sum + square;
  }

  printf("A soma dos quadrados dos primeiros N números inteiros é %d", sum);
}

void forfib() {
  int N, i, num1 = 0, num2 = 1, num3;

  num3 = num1 + num2;

  printf("Digite N: ");
  scanf("%d", &N);

  printf("%d %d ", num1, num2);

  
  for (i = 3; i <= N; i++) {
    printf("%d ", num3);
    num1 = num2;
    num2 = num3;
    num3 = num1 + num2;
  }
}

void forweihei() {
  int n;
  double weight, height;

  for (n = 1; n < 6; n++) {
    printf("Digite o peso da pessoa %d: ", n);
    scanf("%lf", &weight);
    printf("Digite a altura da pessoa %d: ", n);
    scanf("%lf", &height);
    printf("Peso e altura da pessoa %d : %g kg, %g m\n", n, weight, height);
  }
}

int main(void) {
  forN();
}
