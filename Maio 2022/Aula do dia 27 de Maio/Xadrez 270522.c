#include <stdio.h>

void tab(char boardpieces[8][8]) {
  for (int i = 7; i >= 0; --i) {
    for(int j = 0; j < 8; ++j) {
      printf("%c ", boardpieces[i][j]);
    }
    printf("\n");
  }
  printf("----------------\n");
}

char movepiece(char boardpieces[8][8], const char mov[5]) {
  int jo = mov[0] - 'a';
  int io = mov[1] - '1';
  int jd = mov[2] - 'a';
  int id = mov[3] - '1';
  int dblack, oblack;
  char dest, origin, ret;
  dest = boardpieces[id][jd];
  origin = boardpieces[io][jo];
  
  if (dest == ' ') {//movimento normal
    boardpieces[id][jd] = origin;
    boardpieces[io][jo] = ' ';
    ret = 0;
  }
  else {
  dblack = dest < 'a';
  oblack = origin < 'a';
  
  if (dblack != oblack) {//captura
    boardpieces[id][jd] = origin;
    boardpieces[io][jo] = ' ';
    ret = dest;
  }
  else ret ='?';//Destino tem peça da mesma cor
  }
  printf("Retornando %c\n", ret ? ret : '0');
  tab(boardpieces);
  return ret;
}

int main(void) {
  char boardpieces[8][8] = {'t','c','b','d','r','b','c','t',
                      'p','p','p','p','p','p','p','p',                    
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      'P','P','P','P','P','P','P','P',
                      'T','C','B','D','R','B','C','T'};
  tab(boardpieces);
  movepiece(boardpieces, "f2f3");
  movepiece(boardpieces, "e7e5");
  movepiece(boardpieces, "g2g4");
  movepiece(boardpieces, "d8h4");
  movepiece(boardpieces, "h4a1");
  movepiece(boardpieces, "c1d1");
}
