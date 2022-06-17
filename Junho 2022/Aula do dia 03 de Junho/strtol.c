#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int n1, n2;
	
	printf("argc = %d\n", argc);
	
	for (i = 0; i < argc; ++i) {
    printf("argv[%d] = %.70s\n", i, argv[i]);
	}
	
	if (argc != 3) {
		printf("Uso: argproduto n1 n2");
		exit(1);
	}
	
	n1 = strtol(argv[1], 0, 0);
	n2 = strtol(argv[2], 0, 0);
	printf("O produto de %d por %d e' %d\n", n1, n2, n1 * n2);
	return 0;
}
//rodar na linha de comando
