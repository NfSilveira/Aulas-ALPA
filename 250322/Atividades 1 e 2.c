#include <stdio.h>
#include <stdlib.h>

void At1() {
  int number;
  
  printf("Digite um n%cmero inteiro: ", 163);
  scanf("%d", &number);
  printf("O n%cmero digitado multiplicado por 7 %c igual a %d.\n", 163, 130, number * 7);
}

void At2() {
  double nota1, nota2;
  
  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);
  printf("Sua m%cdia %c igual a %g!\n", 130, 130, ((nota1 + nota2)/2));
}

void main() {
  At1();
  At2();
}
/*para acentuar as letras no compilador(Notepad++, etc) com ASCII, utilize #include <stdlib.h> no começo do código, depois do <stdio.h>, e procure o caractere acentuado que você deseja em uma tabela ASCII.
Exemplos mais comuns: é= 130, à= 133, ç= 135;
á= 160, í= 161, ó= 162, ú= 163, Á= 181, â= 131.
Exemplo de código:
printf("O n%cmero digitado multiplicado por 7 %c igual a %d", 163, 130);
*/
