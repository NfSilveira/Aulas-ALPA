#include <stdio.h>


int main(int argc, char *argv[argc + 1]) {
  printf("argc = %d\n", argc);
  for (int i = 0; i < argc; ++i) {
    printf("argv[%d] = %.70s\n", i, argv[i]);
  }
  return 0;
}
