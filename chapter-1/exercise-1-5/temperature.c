#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int celsius;

  for (celsius = 150; celsius >= -20; celsius = celsius - 5)
    printf("%6d %3d\n", celsius, (celsius * 9 / 5) + 32);
  return 0;
}
