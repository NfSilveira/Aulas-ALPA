#include <stdio.h>
#include <stdlib.h>


void ex1() {
  int numA, numB;

  printf("Digite dois n%cmeros no formato NumeroA, NumeroB: ", 163);
  scanf("%d, %d", &numA, &numB);

  if (numA > numB) {
    printf("O n%cmero maior %c %d.", 163, 130, numA);
  }

  else {
    printf("O n%cmero maior %c %d.", 163, 130, numB);
  }
}

void ex2() {
  int SenhaVal = 1234, SenhaDig;

  printf("Digite a senha: ");
  scanf("%d", &SenhaDig);

  if (SenhaDig == SenhaVal) {
    printf("Acesso Permitido!");
  }

  else {
    printf("Acesso Negado.");
  }
}

void ex3() {
  int num1, num2, num3;

  printf("Digite tr%cs n%cmeros, no formato Numero1, Numero2, Numero3: ", 136, 163);
  scanf("%d, %d, %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3) {
    printf("O n%cmero maior %c %d.", 163, 130, num1);
  }

  else if (num2 > num1 && num2 > num3) {
    printf("O n%cmero maior %c %d.", 163, 130, num2);
  }

  else {
    printf("O n%cmero maior %c %d.", 163, 130, num3);
  }
}

void ex4() {
  int AnoAt, AnoNasc;

  printf("Digite o ano atual: ");
  scanf("%d", &AnoAt);

  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &AnoNasc);

  if (AnoAt - AnoNasc >= 18) {
    printf("Voc%c pode votar esse ano!", 136);
  }

  else {
    printf("Voc%c n%co pode votar esse ano.", 136, 198);
  }
}

int main(void) {
  ex1();
  ex2();
  ex3();
  ex4();
}
/*para acentuar as letras no compilador(Notepad++, etc) com ASCII, utilize #include <stdlib.h> no começo do código, depois do <stdio.h>, e procure o caractere acentuado que você deseja em uma tabela ASCII.
Exemplos mais comuns: é= 130, à= 133, ç= 135;
á= 160, í= 161, ó= 162, ú= 163, Á= 181, â= 131.
Exemplo de código:
printf("O n%cmero digitado multiplicado por 7 %c igual a %d", 163, 130);
*/
