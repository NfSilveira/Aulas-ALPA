#include <stdio.h>
#include <stdlib.h>

void teste() {
  char nome[32];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Voc%c se chama %s. Que nome bonito!\n", 136, nome);
  int idade;
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Voc%c tem %d anos. Todos s%co jovens de esp%crito!", 136, 198, 161, idade);
}

void main() {
  teste();
}
/* Código básico para brincar!
- Execute o código no CMD/Powershell com base no tutorial no link "https://replit.com/@DeuxChariot/ALPA250322#main.c"
*/
