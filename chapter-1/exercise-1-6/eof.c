#include <stdio.h>

int main() {
  int c;

  c = (getchar() != EOF);
  putchar(c);
  printf("getchar() != EOF is %d\n", c);

  return 0;
}
