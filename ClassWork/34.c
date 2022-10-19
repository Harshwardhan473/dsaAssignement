#include <stdio.h>
 #define N 10

//This Programme Is Created By Harshwardhan (219301337).

int main() {
  char chr;
  printf("\n");
    for (chr = 65; chr <= 122; chr = chr + 1) {
    if (chr > 90 && chr < 97)
     continue;
    printf("[%2d-%c] ", chr, chr);
  }
  return 0;
}