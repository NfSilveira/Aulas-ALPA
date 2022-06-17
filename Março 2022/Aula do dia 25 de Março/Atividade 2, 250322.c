#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  double nota1, nota2;

  setlocale(LC_ALL, "pt-BR");
  
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Sua média é igual a %g!\n", ((nota1 + nota2)/2));
}
/*para acentuar as letras no compilador(Notepad++, etc) com ASCII, utilize #include <stdlib.h> no começo do código, depois do <stdio.h>, e procure o caractere acentuado que você deseja em uma tabela ASCII.
Exemplos mais comuns: é= 130, à= 133, ç= 135, á= 160, í= 161, ó= 162, ú= 163, Á= 181, â= 131, ã= 198, ê= 136.
Exemplo de código:
printf("O n%cmero digitado multiplicado por 7 %c igual a %d", 163, 130);
*/
