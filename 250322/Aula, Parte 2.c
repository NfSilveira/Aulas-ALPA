#include <stdio.h>

void teste() {
  char nome[32];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Voce se chama %s. Que nome bonito!\n", nome);
  int idade;
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Voce tem %d anos. Todos sao jovens de espirito!", idade);
}

void main() {
  teste();
}
/* Código básico para brincar!
- Execute o código no CMD/Powershell com base no tutorial no link "https://replit.com/@DeuxChariot/ALPA250322#main.c"
*/
