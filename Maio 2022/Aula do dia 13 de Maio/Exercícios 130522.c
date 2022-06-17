#include <stdio.h>

void ex1() {
  char str[] = "algoritmos";
  int i, count = 0;

  for(i=0; str[i]; i++) {
    count++;
  }
  printf("%d", count);
}

void ex2() {
  char str[] = "algoritmos";
  int i, count = 0;

  for(i=0; str[i]; i++) {
  count++;
  }
  for(i = count; i >= 0; i--)
  {
    printf("%c", str[i]);
  }
}

void ex3() {
  char str1[20] = "algoritmos";
  char str2[] = "digitos";
  char letra;
  int i = 0;

  while (letra) {
    letra = str1[i];
    printf("str1[%d] = %c\n", i, str1[i]);
    i += 1;
  }

  /*do {
    letra = str1[i];
    printf("str1[%d] = %c %02x\n", i, letra, letra);
    i += 1;
  }
  while(letra);*/
}

int main(void) {
  ex3();
}
