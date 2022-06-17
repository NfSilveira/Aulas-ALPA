#include <stdio.h>
#include <stdlib.h>

void dobra(int vetor[], const int tam) {
  for (int i = 0; i < tam; i++) {
    vetor[i] *= 2;
    printf("%d ", vetor[i]);
  }
}

void papagaio() {
  char palavra[255];

  while (palavra[0] != '#') {
  printf("Digite uma palavra: ");

  fflush(stdin);
  fgets(palavra, 4 + 1, stdin);
    
    if (palavra[0] == '#') {
      break;
    }
  printf("%s\n", palavra);
    
    for (int i=0; palavra[i] != '\n' && palavra[i]; ++i) {
    palavra[i] = 0;
    }
  }
}


int main(void) {
  papagaio();
}
