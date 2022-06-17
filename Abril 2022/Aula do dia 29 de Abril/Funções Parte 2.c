#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;

  srand((unsigned) time(0));
  i = 0;
  
  while (i < 10) {
    int r = rand();
    printf("%d\n", r % 50);
    i++;
  }
  return 0;
}
