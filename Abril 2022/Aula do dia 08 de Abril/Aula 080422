#include <stdio.h>

void ex1() {
  int num, i = 1, fat = 1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  while (i <= num) {
    fat = fat * i;
    i++;
  }

  printf("O fatorial de %d e %d",num, fat);
}

void ex2() {
  int i = 1, input, soma;

  printf("Digite um numero inteiro: ");
  scanf("%d", &input);

    while (i <= input) {
    soma = soma + i * i;
    i = i + 1;
  }

  printf("A soma dos quadrados de todos os inteiros de 1 ate o numero digitado e: %d", soma);
  }

void ex3() {
  double C = 0, F = 0, limite = -459.67;

  while (F >= limite) {
  printf("Graus F: ");
  scanf("%lf", &F);

  C = (F - 32) * 5.0/9.0;
  
  if (F < limite) {
    printf("Programa Interrompido.");
  }

    else {
    printf("%g\n", C);
    }
  }
}

void ex4() {
  int MPesada = 0, i = 1;
  double AMPesada = 0.0, PMPesada = 0.0;

  while(i <= 5) {
    printf("Altura da pessoa %d: ", i);
    double altura;
    scanf("%lf", &altura);
    printf("Peso da pessoa %d: ", i);
    double peso;
    scanf("%lf", &peso);
    if(peso > PMPesada) {
      PMPesada = peso;
      AMPesada = altura;
      MPesada = i;
    }
    i = i + 1;
  }
  printf("A pessoa mais pesada e a de numero %d, com altura de %gm.", MPesada, AMPesada);
}

void ex5() {
  double num = 0;
  int count;

  printf("Digite um numero inteiro: ");
  scanf("%lf", &num);

  do {
    num = num / 2;
    count++;
  }
    while (num >= 1);

  printf("O resultado da ultima divisao foi %g e foi(foram) realizada(s) %d divisao(oes).", num, count);
}

int main(void) {
  ex5();
}
