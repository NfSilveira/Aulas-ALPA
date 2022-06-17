#include <stdio.h>
#define TAM 100

void arrays() {
  char str[] = "string\n";
  char letra;
  printf("Tamanho de str=%d\n", (int)sizeof(str));
  int i=0;
  do {
    letra = str[i];
    printf("str[%d]=%c %02x\n", i, letra, letra);
    i += 1;
  } while (letra);
}

void arrays2() {
  int quadrado[TAM];
  int n = 20;

  for(int i=0; i < n; ++i) {
    quadrado[i] = (i+1) * (i+1);
  }
}

void arrays3() {
  char str[] = "string de teste";

  for (int i=0; str[i]; ++i) {
    printf("%d ", str[i]);
  }
}

int main(void) {
  arrays3();
}
